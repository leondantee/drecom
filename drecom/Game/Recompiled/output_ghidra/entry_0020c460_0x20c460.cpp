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

// Function: entry_0020c460
// Address: 0x20c460 - 0x20c4e8
void entry_0020c460_0x20c460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020c460_0x20c460");
#endif

    ctx->pc = 0x20c460u;

    // 0x20c460: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x20c460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20c464: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x20c464u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x20c468: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x20c468u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x20c46c: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x20c46cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x20c470: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x20C470u;
    {
        const bool branch_taken_0x20c470 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20c470) {
            ctx->pc = 0x20C4E8u;
            return;
        }
    }
    ctx->pc = 0x20C478u;
    // 0x20c478: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20c478u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20c47c: 0x0  nop
    ctx->pc = 0x20c47cu;
    // NOP
    // 0x20c480: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x20c480u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x20c484: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20c484u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20c488: 0x0  nop
    ctx->pc = 0x20c488u;
    // NOP
    // 0x20c48c: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x20c48cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x20c490: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20c490u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20c494: 0x0  nop
    ctx->pc = 0x20c494u;
    // NOP
    // 0x20c498: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x20c498u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x20c49c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x20c49cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x20c4a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20c4a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20c4a4: 0x0  nop
    ctx->pc = 0x20c4a4u;
    // NOP
    // 0x20c4a8: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x20c4a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x20c4ac: 0x10183c  dsll32      $v1, $s0, 0
    ctx->pc = 0x20c4acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 0));
    // 0x20c4b0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x20c4b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x20c4b4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x20c4b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x20c4b8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x20c4b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x20c4bc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x20c4bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x20c4c0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x20c4c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x20c4c4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x20c4c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x20c4c8: 0x34440006  ori         $a0, $v0, 0x6
    ctx->pc = 0x20c4c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
    // 0x20c4cc: 0x8e020130  lw          $v0, 0x130($s0)
    ctx->pc = 0x20c4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x20c4d0: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x20c4d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x20c4d4: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x20c4d4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x20c4d8: 0x24470580  addiu       $a3, $v0, 0x580
    ctx->pc = 0x20c4d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 1408));
    // 0x20c4dc: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x20c4dcu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x20c4e0: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x20C4E0u;
    SET_GPR_U32(ctx, 31, 0x20C4E8u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x20C4E0u, 0x20C4E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C4E8u;
}
