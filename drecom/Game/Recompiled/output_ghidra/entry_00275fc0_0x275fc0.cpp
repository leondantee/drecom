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

// Function: entry_00275fc0
// Address: 0x275fc0 - 0x276028
void entry_00275fc0_0x275fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00275fc0_0x275fc0");
#endif

    ctx->pc = 0x275fc0u;

    // 0x275fc0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x275fc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x275fc4: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x275fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x275fc8: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x275fc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x275fcc: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x275fccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x275fd0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x275fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x275fd4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x275fd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x275fd8: 0x22a00  sll         $a1, $v0, 8
    ctx->pc = 0x275fd8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x275fdc: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x275fdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x275fe0: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x275fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x275fe4: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x275fe4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x275fe8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x275fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x275fec: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x275fecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x275ff0: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x275ff0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x275ff4: 0x31202  srl         $v0, $v1, 8
    ctx->pc = 0x275ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x275ff8: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x275ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x275ffc: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x275ffcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x276000: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x276000u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x276004: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x276004u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x276008: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x276008u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x27600c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x27600Cu;
    {
        const bool branch_taken_0x27600c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x27600c) {
            ctx->pc = 0x276028u;
            return;
        }
    }
    ctx->pc = 0x276014u;
    // 0x276014: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x276014u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x276018: 0x0  nop
    ctx->pc = 0x276018u;
    // NOP
    // 0x27601c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x27601cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x276020: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x276020u;
    {
        const bool branch_taken_0x276020 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x276020) {
            ctx->pc = 0x276044u;
            return;
        }
    }
    ctx->pc = 0x276028u;
}
