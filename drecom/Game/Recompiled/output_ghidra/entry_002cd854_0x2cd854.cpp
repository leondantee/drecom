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

// Function: entry_002cd854
// Address: 0x2cd854 - 0x2cd918
void entry_002cd854_0x2cd854(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002cd854_0x2cd854");
#endif

    switch (ctx->pc) {
        case 0x2cd880u: goto label_2cd880;
        case 0x2cd89cu: goto label_2cd89c;
        case 0x2cd8b4u: goto label_2cd8b4;
        case 0x2cd8c0u: goto label_2cd8c0;
        case 0x2cd8d0u: goto label_2cd8d0;
        case 0x2cd8dcu: goto label_2cd8dc;
        default: break;
    }

    ctx->pc = 0x2cd854u;

    // 0x2cd854: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2cd854u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cd858: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2cd858u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cd85c: 0x3c023e32  lui         $v0, 0x3E32
    ctx->pc = 0x2cd85cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15922 << 16));
    // 0x2cd860: 0x3442b8c2  ori         $v0, $v0, 0xB8C2
    ctx->pc = 0x2cd860u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)47298);
    // 0x2cd864: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2cd864u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2cd868: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x2cd868u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x2cd86c: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x2cd86cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2cd870: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2cd870u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2cd874: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x2cd874u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x2cd878: 0xc05c848  jal         func_172120
    ctx->pc = 0x2CD878u;
    SET_GPR_U32(ctx, 31, 0x2CD880u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x2CD878u, 0x2CD880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD880u;
label_2cd880:
    // 0x2cd880: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x2cd880u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x2cd884: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2cd884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cd888: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x2cd888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cd88c: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x2cd88cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cd890: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x2cd890u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2cd894: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2CD894u;
    SET_GPR_U32(ctx, 31, 0x2CD89Cu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2CD894u, 0x2CD89Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD89Cu;
label_2cd89c:
    // 0x2cd89c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2cd89cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cd8a0: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x2cd8a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x2cd8a4: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2cd8a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cd8a8: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2cd8a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2cd8ac: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2CD8ACu;
    SET_GPR_U32(ctx, 31, 0x2CD8B4u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2CD8ACu, 0x2CD8B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD8B4u;
label_2cd8b4:
    // 0x2cd8b4: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2cd8b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cd8b8: 0xc05cd34  jal         func_1734D0
    ctx->pc = 0x2CD8B8u;
    SET_GPR_U32(ctx, 31, 0x2CD8C0u);
    ctx->pc = 0x1734D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1734D0u, 0x2CD8B8u, 0x2CD8C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD8C0u;
label_2cd8c0:
    // 0x2cd8c0: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2cd8c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cd8c4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2cd8c4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2cd8c8: 0xc0b1094  jal         func_2C4250
    ctx->pc = 0x2CD8C8u;
    SET_GPR_U32(ctx, 31, 0x2CD8D0u);
    ctx->pc = 0x2C4250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4250u, 0x2CD8C8u, 0x2CD8D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD8D0u;
label_2cd8d0:
    // 0x2cd8d0: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2cd8d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cd8d4: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x2CD8D4u;
    SET_GPR_U32(ctx, 31, 0x2CD8DCu);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x2CD8D4u, 0x2CD8DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD8DCu;
label_2cd8dc:
    // 0x2cd8dc: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2cd8dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cd8e0: 0x3c033f73  lui         $v1, 0x3F73
    ctx->pc = 0x2cd8e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16243 << 16));
    // 0x2cd8e4: 0x34633333  ori         $v1, $v1, 0x3333
    ctx->pc = 0x2cd8e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
    // 0x2cd8e8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2cd8e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2cd8ec: 0xc4800184  lwc1        $f0, 0x184($a0)
    ctx->pc = 0x2cd8ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cd8f0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2cd8f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2cd8f4: 0xe4800184  swc1        $f0, 0x184($a0)
    ctx->pc = 0x2cd8f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 388), bits); }
    // 0x2cd8f8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2cd8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cd8fc: 0x84631278  lh          $v1, 0x1278($v1)
    ctx->pc = 0x2cd8fcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x2cd900: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2CD900u;
    {
        const bool branch_taken_0x2cd900 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cd900) {
            ctx->pc = 0x2CD918u;
            return;
        }
    }
    ctx->pc = 0x2CD908u;
    // 0x2cd908: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2cd908u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cd90c: 0x84831278  lh          $v1, 0x1278($a0)
    ctx->pc = 0x2cd90cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
    // 0x2cd910: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2cd910u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2cd914: 0xa4831278  sh          $v1, 0x1278($a0)
    ctx->pc = 0x2cd914u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x2cd918u;
}
