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

// Function: entry_001cb63c
// Address: 0x1cb63c - 0x1cb6a4
void entry_001cb63c_0x1cb63c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cb63c_0x1cb63c");
#endif

    switch (ctx->pc) {
        case 0x1cb674u: goto label_1cb674;
        case 0x1cb68cu: goto label_1cb68c;
        case 0x1cb6a0u: goto label_1cb6a0;
        default: break;
    }

    ctx->pc = 0x1cb63cu;

    // 0x1cb63c: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x1cb63cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cb640: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x1cb640u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x1cb644: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1cb644u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cb648: 0x0  nop
    ctx->pc = 0x1cb648u;
    // NOP
    // 0x1cb64c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1cb64cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1cb650: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x1cb650u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x1cb654: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1cb654u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1cb658: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1cb658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1cb65c: 0x8c450130  lw          $a1, 0x130($v0)
    ctx->pc = 0x1cb65cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x1cb660: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x1cb660u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1cb664: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1cb664u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1cb668: 0x24478b60  addiu       $a3, $v0, -0x74A0
    ctx->pc = 0x1cb668u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937440));
    // 0x1cb66c: 0xc06d02c  jal         func_1B40B0
    ctx->pc = 0x1CB66Cu;
    SET_GPR_U32(ctx, 31, 0x1CB674u);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x1CB66Cu, 0x1CB674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB674u;
label_1cb674:
    // 0x1cb674: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1CB674u;
    {
        const bool branch_taken_0x1cb674 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cb674) {
            ctx->pc = 0x1CB6A4u;
            return;
        }
    }
    ctx->pc = 0x1CB67Cu;
    // 0x1cb67c: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x1cb67cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x1cb680: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x1cb680u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
    // 0x1cb684: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x1CB684u;
    SET_GPR_U32(ctx, 31, 0x1CB68Cu);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x1CB684u, 0x1CB68Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB68Cu;
label_1cb68c:
    // 0x1cb68c: 0x3c100600  lui         $s0, 0x600
    ctx->pc = 0x1cb68cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)1536 << 16));
    // 0x1cb690: 0x3604ff80  ori         $a0, $s0, 0xFF80
    ctx->pc = 0x1cb690u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)65408);
    // 0x1cb694: 0x3c050008  lui         $a1, 0x8
    ctx->pc = 0x1cb694u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
    // 0x1cb698: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x1CB698u;
    SET_GPR_U32(ctx, 31, 0x1CB6A0u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x1CB698u, 0x1CB6A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB6A0u;
label_1cb6a0:
    // 0x1cb6a0: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x1cb6a0u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1cb6a4u;
}
