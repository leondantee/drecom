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

// Function: entry_00147c04
// Address: 0x147c04 - 0x147c74
void entry_00147c04_0x147c04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00147c04_0x147c04");
#endif

    switch (ctx->pc) {
        case 0x147c10u: goto label_147c10;
        case 0x147c50u: goto label_147c50;
        default: break;
    }

    ctx->pc = 0x147c04u;

    // 0x147c04: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x147c04u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x147c08: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x147C08u;
    SET_GPR_U32(ctx, 31, 0x147C10u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x147C08u, 0x147C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147C10u;
label_147c10:
    // 0x147c10: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x147c10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x147c14: 0x8c631b64  lw          $v1, 0x1B64($v1)
    ctx->pc = 0x147c14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7012)));
    // 0x147c18: 0x14600132  bnez        $v1, . + 4 + (0x132 << 2)
    ctx->pc = 0x147C18u;
    {
        const bool branch_taken_0x147c18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x147c18) {
            ctx->pc = 0x1480E4u;
            return;
        }
    }
    ctx->pc = 0x147C20u;
    // 0x147c20: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x147c20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x147c24: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x147c24u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x147c28: 0x1060012e  beqz        $v1, . + 4 + (0x12E << 2)
    ctx->pc = 0x147C28u;
    {
        const bool branch_taken_0x147c28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x147c28) {
            ctx->pc = 0x1480E4u;
            return;
        }
    }
    ctx->pc = 0x147C30u;
    // 0x147c30: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x147c30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x147c34: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x147c34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x147c38: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x147c38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x147c3c: 0x24060a0c  addiu       $a2, $zero, 0xA0C
    ctx->pc = 0x147c3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2572));
    // 0x147c40: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x147c40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x147c44: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x147c44u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x147c48: 0xc0965d0  jal         func_259740
    ctx->pc = 0x147C48u;
    SET_GPR_U32(ctx, 31, 0x147C50u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x147C48u, 0x147C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147C50u;
label_147c50:
    // 0x147c50: 0x3c034040  lui         $v1, 0x4040
    ctx->pc = 0x147c50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16448 << 16));
    // 0x147c54: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x147c54u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x147c58: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x147c58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x147c5c: 0xe4601280  swc1        $f0, 0x1280($v1)
    ctx->pc = 0x147c5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4736), bits); }
    // 0x147c60: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x147c60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x147c64: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x147c64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x147c68: 0xac641b64  sw          $a0, 0x1B64($v1)
    ctx->pc = 0x147c68u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7012), GPR_U32(ctx, 4));
    // 0x147c6c: 0x1000011d  b           . + 4 + (0x11D << 2)
    ctx->pc = 0x147C6Cu;
    {
        const bool branch_taken_0x147c6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x147c6c) {
            ctx->pc = 0x1480E4u;
            return;
        }
    }
    ctx->pc = 0x147C74u;
}
