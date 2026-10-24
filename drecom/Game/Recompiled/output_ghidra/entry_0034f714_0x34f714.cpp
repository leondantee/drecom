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

// Function: entry_0034f714
// Address: 0x34f714 - 0x34f7b8
void entry_0034f714_0x34f714(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0034f714_0x34f714");
#endif

    switch (ctx->pc) {
        case 0x34f740u: goto label_34f740;
        default: break;
    }

    ctx->pc = 0x34f714u;

    // 0x34f714: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x34f714u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34f718: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x34f718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34f71c: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x34f71cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x34f720: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x34f720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34f724: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x34f724u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34f728: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x34f728u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x34f72c: 0x24060433  addiu       $a2, $zero, 0x433
    ctx->pc = 0x34f72cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1075));
    // 0x34f730: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x34f730u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34f734: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x34f734u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x34f738: 0xc0965d0  jal         func_259740
    ctx->pc = 0x34F738u;
    SET_GPR_U32(ctx, 31, 0x34F740u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x34F738u, 0x34F740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34F740u;
label_34f740:
    // 0x34f740: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x34f740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34f744: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x34f744u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34f748: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x34f748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x34f74c: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x34f74cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x34f750: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x34f750u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x34f754: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x34f754u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x34f758: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x34f758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34f75c: 0xa04310a8  sb          $v1, 0x10A8($v0)
    ctx->pc = 0x34f75cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 3));
    // 0x34f760: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x34f760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34f764: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x34f764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x34f768: 0x24500960  addiu       $s0, $v0, 0x960
    ctx->pc = 0x34f768u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 2400));
    // 0x34f76c: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x34f76cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x34f770: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x34f770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x34f774: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x34f774u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x34f778: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x34f778u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x34f77c: 0x3c02435c  lui         $v0, 0x435C
    ctx->pc = 0x34f77cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17244 << 16));
    // 0x34f780: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34f780u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34f784: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x34f784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34f788: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34f788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34f78c: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x34f78cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x34f790: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x34f790u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x34f794: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34f794u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34f798: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x34f798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34f79c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34f79cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34f7a0: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x34f7a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x34f7a4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x34f7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34f7a8: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x34f7a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34f7ac: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x34f7acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x34f7b0: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x34f7b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x34f7b4: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x34f7b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    ctx->pc = 0x34f7b8u;
}
