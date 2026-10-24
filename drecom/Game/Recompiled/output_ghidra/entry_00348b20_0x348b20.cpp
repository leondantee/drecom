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

// Function: entry_00348b20
// Address: 0x348b20 - 0x348bbc
void entry_00348b20_0x348b20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00348b20_0x348b20");
#endif

    switch (ctx->pc) {
        case 0x348ba4u: goto label_348ba4;
        default: break;
    }

    ctx->pc = 0x348b20u;

    // 0x348b20: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x348b20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x348b24: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x348b24u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x348b28: 0x106000c3  beqz        $v1, . + 4 + (0xC3 << 2)
    ctx->pc = 0x348B28u;
    {
        const bool branch_taken_0x348b28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x348b28) {
            ctx->pc = 0x348E38u;
            return;
        }
    }
    ctx->pc = 0x348B30u;
    // 0x348b30: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x348b30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x348b34: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x348b34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x348b38: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x348b38u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x348b3c: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x348b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x348b40: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x348b40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x348b44: 0x24520960  addiu       $s2, $v0, 0x960
    ctx->pc = 0x348b44u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 2400));
    // 0x348b48: 0x26430150  addiu       $v1, $s2, 0x150
    ctx->pc = 0x348b48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 336));
    // 0x348b4c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x348b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x348b50: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x348b50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x348b54: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x348b54u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x348b58: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x348b58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x348b5c: 0x245110b0  addiu       $s1, $v0, 0x10B0
    ctx->pc = 0x348b5cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4272));
    // 0x348b60: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x348b60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x348b64: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x348b64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x348b68: 0x0  nop
    ctx->pc = 0x348b68u;
    // NOP
    // 0x348b6c: 0xe62000d0  swc1        $f0, 0xD0($s1)
    ctx->pc = 0x348b6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 208), bits); }
    // 0x348b70: 0xe62000d4  swc1        $f0, 0xD4($s1)
    ctx->pc = 0x348b70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 212), bits); }
    // 0x348b74: 0x3c02c348  lui         $v0, 0xC348
    ctx->pc = 0x348b74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49992 << 16));
    // 0x348b78: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x348b78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x348b7c: 0x0  nop
    ctx->pc = 0x348b7cu;
    // NOP
    // 0x348b80: 0xe6200034  swc1        $f0, 0x34($s1)
    ctx->pc = 0x348b80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 52), bits); }
    // 0x348b84: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x348b84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x348b88: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x348b88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x348b8c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x348b8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x348b90: 0x24061e17  addiu       $a2, $zero, 0x1E17
    ctx->pc = 0x348b90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7703));
    // 0x348b94: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x348b94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x348b98: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x348b98u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x348b9c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x348B9Cu;
    SET_GPR_U32(ctx, 31, 0x348BA4u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x348B9Cu, 0x348BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348BA4u;
label_348ba4:
    // 0x348ba4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x348ba4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x348ba8: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x348ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x348bac: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x348bacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x348bb0: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x348bb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x348bb4: 0x100000a0  b           . + 4 + (0xA0 << 2)
    ctx->pc = 0x348BB4u;
    {
        const bool branch_taken_0x348bb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x348bb4) {
            ctx->pc = 0x348E38u;
            return;
        }
    }
    ctx->pc = 0x348BBCu;
}
