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

// Function: entry_00197934
// Address: 0x197934 - 0x1979b4
void entry_00197934_0x197934(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00197934_0x197934");
#endif

    switch (ctx->pc) {
        case 0x19795cu: goto label_19795c;
        case 0x1979acu: goto label_1979ac;
        default: break;
    }

    ctx->pc = 0x197934u;

    // 0x197934: 0x3c023b44  lui         $v0, 0x3B44
    ctx->pc = 0x197934u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15172 << 16));
    // 0x197938: 0x34479ba6  ori         $a3, $v0, 0x9BA6
    ctx->pc = 0x197938u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39846);
    // 0x19793c: 0x44876000  mtc1        $a3, $f12
    ctx->pc = 0x19793cu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x197940: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x197940u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x197944: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x197944u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x197948: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x197948u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19794c: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x19794cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x197950: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x197950u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x197954: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x197954u;
    SET_GPR_U32(ctx, 31, 0x19795Cu);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x197954u, 0x19795Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19795Cu;
label_19795c:
    // 0x19795c: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x19795cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x197960: 0x3c023e19  lui         $v0, 0x3E19
    ctx->pc = 0x197960u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15897 << 16));
    // 0x197964: 0x3447999a  ori         $a3, $v0, 0x999A
    ctx->pc = 0x197964u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x197968: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x197968u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19796c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x19796cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x197970: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x197970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x197974: 0x8c4408c0  lw          $a0, 0x8C0($v0)
    ctx->pc = 0x197974u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2240)));
    // 0x197978: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x197978u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x19797c: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x19797cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x197980: 0x44856000  mtc1        $a1, $f12
    ctx->pc = 0x197980u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x197984: 0x8fa60018  lw          $a2, 0x18($sp)
    ctx->pc = 0x197984u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x197988: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x197988u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x19798c: 0x2407001b  addiu       $a3, $zero, 0x1B
    ctx->pc = 0x19798cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x197990: 0x70e02e28  paddub      $a1, $a3, $zero
    ctx->pc = 0x197990u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x197994: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x197994u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x197998: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x197998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19799c: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x19799cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1979a0: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x1979a0u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1979a4: 0xc06c130  jal         func_1B04C0
    ctx->pc = 0x1979A4u;
    SET_GPR_U32(ctx, 31, 0x1979ACu);
    ctx->pc = 0x1B04C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B04C0u, 0x1979A4u, 0x1979ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1979ACu;
label_1979ac:
    // 0x1979ac: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x1979ACu;
    {
        const bool branch_taken_0x1979ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1979ac) {
            ctx->pc = 0x197A78u;
            return;
        }
    }
    ctx->pc = 0x1979B4u;
}
