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

// Function: entry_0023a184
// Address: 0x23a184 - 0x23a2a8
void entry_0023a184_0x23a184(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023a184_0x23a184");
#endif

    switch (ctx->pc) {
        case 0x23a204u: goto label_23a204;
        case 0x23a264u: goto label_23a264;
        case 0x23a26cu: goto label_23a26c;
        case 0x23a2a0u: goto label_23a2a0;
        default: break;
    }

    ctx->pc = 0x23a184u;

    // 0x23a184: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x23a184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23a188: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x23a188u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x23a18c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x23a18cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x23a190: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x23a190u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x23a194: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23a194u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23a198: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x23a198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23a19c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23a19cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23a1a0: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x23a1a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x23a1a4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23a1a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23a1a8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x23a1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23a1ac: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23a1acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23a1b0: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x23a1b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x23a1b4: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x23a1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x23a1b8: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x23a1b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x23a1bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23a1bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23a1c0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x23a1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23a1c4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23a1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23a1c8: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x23a1c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x23a1cc: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x23a1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x23a1d0: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x23a1d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x23a1d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23a1d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23a1d8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x23a1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23a1dc: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23a1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23a1e0: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x23a1e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x23a1e4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x23a1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23a1e8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x23a1e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23a1ec: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x23a1ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x23a1f0: 0x24065a00  addiu       $a2, $zero, 0x5A00
    ctx->pc = 0x23a1f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23040));
    // 0x23a1f4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x23a1f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23a1f8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x23a1f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x23a1fc: 0xc0965d0  jal         func_259740
    ctx->pc = 0x23A1FCu;
    SET_GPR_U32(ctx, 31, 0x23A204u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x23A1FCu, 0x23A204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A204u;
label_23a204:
    // 0x23a204: 0x3c023dd6  lui         $v0, 0x3DD6
    ctx->pc = 0x23a204u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15830 << 16));
    // 0x23a208: 0x34427750  ori         $v0, $v0, 0x7750
    ctx->pc = 0x23a208u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)30544);
    // 0x23a20c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23a20cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23a210: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x23a210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23a214: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23a214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23a218: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x23a218u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    // 0x23a21c: 0x3c023ae4  lui         $v0, 0x3AE4
    ctx->pc = 0x23a21cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15076 << 16));
    // 0x23a220: 0x3442c388  ori         $v0, $v0, 0xC388
    ctx->pc = 0x23a220u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)50056);
    // 0x23a224: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23a224u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23a228: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x23a228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23a22c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23a22cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23a230: 0xe4400058  swc1        $f0, 0x58($v0)
    ctx->pc = 0x23a230u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 88), bits); }
    // 0x23a234: 0x240300b4  addiu       $v1, $zero, 0xB4
    ctx->pc = 0x23a234u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
    // 0x23a238: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x23a238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23a23c: 0xa443127a  sh          $v1, 0x127A($v0)
    ctx->pc = 0x23a23cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 3));
    // 0x23a240: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x23a240u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x23a244: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x23a244u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x23a248: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x23a248u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x23a24c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x23a24cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23a250: 0x24040503  addiu       $a0, $zero, 0x503
    ctx->pc = 0x23a250u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1283));
    // 0x23a254: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x23a254u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x23a258: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x23a258u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x23a25c: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x23A25Cu;
    SET_GPR_U32(ctx, 31, 0x23A264u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x23A25Cu, 0x23A264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A264u;
label_23a264:
    // 0x23a264: 0xc067694  jal         func_19DA50
    ctx->pc = 0x23A264u;
    SET_GPR_U32(ctx, 31, 0x23A26Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x23A264u, 0x23A26Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A26Cu;
label_23a26c:
    // 0x23a26c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x23a26cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x23a270: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x23a270u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x23a274: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x23A274u;
    {
        const bool branch_taken_0x23a274 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23a274) {
            ctx->pc = 0x23A2A8u;
            return;
        }
    }
    ctx->pc = 0x23A27Cu;
    // 0x23a27c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x23a27cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23a280: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x23a280u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x23a284: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x23a284u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x23a288: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x23a288u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x23a28c: 0x24040516  addiu       $a0, $zero, 0x516
    ctx->pc = 0x23a28cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1302));
    // 0x23a290: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x23a290u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x23a294: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x23a294u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x23a298: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x23A298u;
    SET_GPR_U32(ctx, 31, 0x23A2A0u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x23A298u, 0x23A2A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A2A0u;
label_23a2a0:
    // 0x23a2a0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x23A2A0u;
    {
        const bool branch_taken_0x23a2a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23a2a0) {
            ctx->pc = 0x23A2CCu;
            return;
        }
    }
    ctx->pc = 0x23A2A8u;
}
