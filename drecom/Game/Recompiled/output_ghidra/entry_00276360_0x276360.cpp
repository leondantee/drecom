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

// Function: entry_00276360
// Address: 0x276360 - 0x2763c4
void entry_00276360_0x276360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00276360_0x276360");
#endif

    ctx->pc = 0x276360u;

    // 0x276360: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x276360u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x276364: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x276364u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x276368: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x276368u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x27636c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x27636cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x276370: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x276370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x276374: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x276374u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x276378: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x276378u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x27637c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x27637cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x276380: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x276380u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x276384: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x276384u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x276388: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x276388u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x27638c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27638cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x276390: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x276390u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x276394: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x276394u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x276398: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x276398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x27639c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x27639cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2763a0: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x2763a0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2763a4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2763a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2763a8: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2763A8u;
    {
        const bool branch_taken_0x2763a8 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2763a8) {
            ctx->pc = 0x2763C4u;
            return;
        }
    }
    ctx->pc = 0x2763B0u;
    // 0x2763b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2763b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2763b4: 0x0  nop
    ctx->pc = 0x2763b4u;
    // NOP
    // 0x2763b8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2763b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2763bc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2763BCu;
    {
        const bool branch_taken_0x2763bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2763bc) {
            ctx->pc = 0x2763E0u;
            return;
        }
    }
    ctx->pc = 0x2763C4u;
}
