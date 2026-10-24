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

// Function: entry_002742a8
// Address: 0x2742a8 - 0x274310
void entry_002742a8_0x2742a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002742a8_0x2742a8");
#endif

    ctx->pc = 0x2742a8u;

    // 0x2742a8: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2742a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2742ac: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2742acu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2742b0: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2742b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2742b4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2742b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2742b8: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x2742b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2742bc: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x2742bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x2742c0: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x2742c0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2742c4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2742c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2742c8: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2742c8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2742cc: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2742ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2742d0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2742d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2742d4: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x2742d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2742d8: 0x3083ff00  andi        $v1, $a0, 0xFF00
    ctx->pc = 0x2742d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65280);
    // 0x2742dc: 0x32202  srl         $a0, $v1, 8
    ctx->pc = 0x2742dcu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x2742e0: 0xa41821  addu        $v1, $a1, $a0
    ctx->pc = 0x2742e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x2742e4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2742e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2742e8: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x2742e8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2742ec: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2742ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2742f0: 0x3064000f  andi        $a0, $v1, 0xF
    ctx->pc = 0x2742f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x2742f4: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2742F4u;
    {
        const bool branch_taken_0x2742f4 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x2742f4) {
            ctx->pc = 0x274310u;
            return;
        }
    }
    ctx->pc = 0x2742FCu;
    // 0x2742fc: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2742fcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x274300: 0x0  nop
    ctx->pc = 0x274300u;
    // NOP
    // 0x274304: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x274304u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x274308: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x274308u;
    {
        const bool branch_taken_0x274308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x274308) {
            ctx->pc = 0x27432Cu;
            return;
        }
    }
    ctx->pc = 0x274310u;
}
