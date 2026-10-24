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

// Function: entry_0019b960
// Address: 0x19b960 - 0x19b9f4
void entry_0019b960_0x19b960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019b960_0x19b960");
#endif

    switch (ctx->pc) {
        case 0x19b970u: goto label_19b970;
        case 0x19b990u: goto label_19b990;
        case 0x19b99cu: goto label_19b99c;
        case 0x19b9acu: goto label_19b9ac;
        case 0x19b9b8u: goto label_19b9b8;
        default: break;
    }

    ctx->pc = 0x19b960u;

    // 0x19b960: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x19b960u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19b964: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x19b964u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x19b968: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x19B968u;
    SET_GPR_U32(ctx, 31, 0x19B970u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x19B968u, 0x19B970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B970u;
label_19b970:
    // 0x19b970: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x19b970u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19b974: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x19b974u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19b978: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x19b978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19b97c: 0x24840180  addiu       $a0, $a0, 0x180
    ctx->pc = 0x19b97cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 384));
    // 0x19b980: 0x24650180  addiu       $a1, $v1, 0x180
    ctx->pc = 0x19b980u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 384));
    // 0x19b984: 0xc44c01a8  lwc1        $f12, 0x1A8($v0)
    ctx->pc = 0x19b984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x19b988: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x19B988u;
    SET_GPR_U32(ctx, 31, 0x19B990u);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x19B990u;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x19B990u) { return; }
    ctx->pc = 0x19B990u;
label_19b990:
    // 0x19b990: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x19b990u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19b994: 0xc05cd10  jal         func_173440
    ctx->pc = 0x19B994u;
    SET_GPR_U32(ctx, 31, 0x19B99Cu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x19B994u, 0x19B99Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B99Cu;
label_19b99c:
    // 0x19b99c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x19b99cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19b9a0: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x19b9a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x19b9a4: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x19B9A4u;
    SET_GPR_U32(ctx, 31, 0x19B9ACu);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x19B9A4u, 0x19B9ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B9ACu;
label_19b9ac:
    // 0x19b9ac: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x19b9acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19b9b0: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x19B9B0u;
    SET_GPR_U32(ctx, 31, 0x19B9B8u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x19B9B0u, 0x19B9B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B9B8u;
label_19b9b8:
    // 0x19b9b8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x19b9b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19b9bc: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x19b9bcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x19b9c0: 0x1060008e  beqz        $v1, . + 4 + (0x8E << 2)
    ctx->pc = 0x19B9C0u;
    {
        const bool branch_taken_0x19b9c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19b9c0) {
            ctx->pc = 0x19BBFCu;
            return;
        }
    }
    ctx->pc = 0x19B9C8u;
    // 0x19b9c8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x19b9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x19b9cc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x19b9ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19b9d0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x19b9d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19b9d4: 0x24631348  addiu       $v1, $v1, 0x1348
    ctx->pc = 0x19b9d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4936));
    // 0x19b9d8: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x19b9d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x19b9dc: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x19b9dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19b9e0: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x19b9e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x19b9e4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x19b9e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x19b9e8: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x19b9e8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x19b9ec: 0x10000083  b           . + 4 + (0x83 << 2)
    ctx->pc = 0x19B9ECu;
    {
        const bool branch_taken_0x19b9ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19b9ec) {
            ctx->pc = 0x19BBFCu;
            return;
        }
    }
    ctx->pc = 0x19B9F4u;
}
