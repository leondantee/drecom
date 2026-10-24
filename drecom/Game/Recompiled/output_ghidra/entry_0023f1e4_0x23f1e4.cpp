#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_0023f1e4
// Address: 0x23f1e4 - 0x23f2d8
void entry_0023f1e4_0x23f1e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023f1e4_0x23f1e4");
#endif

    switch (ctx->pc) {
        case 0x23f210u: goto label_23f210;
        case 0x23f22cu: goto label_23f22c;
        case 0x23f260u: goto label_23f260;
        case 0x23f26cu: goto label_23f26c;
        default: break;
    }

    ctx->pc = 0x23f1e4u;

    // 0x23f1e4: 0x3c023e49  lui         $v0, 0x3E49
    ctx->pc = 0x23f1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15945 << 16));
    // 0x23f1e8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x23f1e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x23f1ec: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x23f1ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x23f1f0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x23f1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23f1f4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x23f1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23f1f8: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x23f1f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x23f1fc: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x23f1fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x23f200: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x23f200u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x23f204: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x23f204u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x23f208: 0xc05c848  jal         func_172120
    ctx->pc = 0x23F208u;
    SET_GPR_U32(ctx, 31, 0x23F210u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x23F208u, 0x23F210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F210u;
label_23f210:
    // 0x23f210: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x23f210u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x23f214: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x23f214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23f218: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x23f218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23f21c: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x23f21cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23f220: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x23f220u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x23f224: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x23F224u;
    SET_GPR_U32(ctx, 31, 0x23F22Cu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x23F224u, 0x23F22Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F22Cu;
label_23f22c:
    // 0x23f22c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x23f22cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23f230: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x23f230u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x23f234: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x23f234u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23f238: 0xc4610124  lwc1        $f1, 0x124($v1)
    ctx->pc = 0x23f238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23f23c: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x23f23cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x23f240: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23f240u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23f244: 0x0  nop
    ctx->pc = 0x23f244u;
    // NOP
    // 0x23f248: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x23f248u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x23f24c: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x23f24cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
    // 0x23f250: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x23f250u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23f254: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x23f254u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x23f258: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x23F258u;
    SET_GPR_U32(ctx, 31, 0x23F260u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x23F258u, 0x23F260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F260u;
label_23f260:
    // 0x23f260: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x23f260u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23f264: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x23F264u;
    SET_GPR_U32(ctx, 31, 0x23F26Cu);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x23F264u, 0x23F26Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F26Cu;
label_23f26c:
    // 0x23f26c: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x23f26cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23f270: 0x84a41278  lh          $a0, 0x1278($a1)
    ctx->pc = 0x23f270u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4728)));
    // 0x23f274: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x23f274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x23f278: 0xa4a31278  sh          $v1, 0x1278($a1)
    ctx->pc = 0x23f278u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x23f27c: 0x14800016  bnez        $a0, . + 4 + (0x16 << 2)
    ctx->pc = 0x23F27Cu;
    {
        const bool branch_taken_0x23f27c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x23f27c) {
            ctx->pc = 0x23F2D8u;
            return;
        }
    }
    ctx->pc = 0x23F284u;
    // 0x23f284: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x23f284u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23f288: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x23f288u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23f28c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x23f28cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x23f290: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x23f290u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23f294: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x23f294u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23f298: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x23f298u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x23f29c: 0x8fb00038  lw          $s0, 0x38($sp)
    ctx->pc = 0x23f29cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23f2a0: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x23f2a0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x23f2a4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x23f2a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23f2a8: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x23f2a8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x23f2ac: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x23f2acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23f2b0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x23f2b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x23f2b4: 0x2410000a  addiu       $s0, $zero, 0xA
    ctx->pc = 0x23f2b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x23f2b8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x23f2b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23f2bc: 0xa4701278  sh          $s0, 0x1278($v1)
    ctx->pc = 0x23f2bcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 16));
    // 0x23f2c0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x23f2c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23f2c4: 0x24701330  addiu       $s0, $v1, 0x1330
    ctx->pc = 0x23f2c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23f2c8: 0xa600005c  sh          $zero, 0x5C($s0)
    ctx->pc = 0x23f2c8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 92), (uint16_t)GPR_U32(ctx, 0));
    // 0x23f2cc: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x23f2ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
    // 0x23f2d0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x23f2d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23f2d4: 0xac64121c  sw          $a0, 0x121C($v1)
    ctx->pc = 0x23f2d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4636), GPR_U32(ctx, 4));
    ctx->pc = 0x23f2d8u;
}
