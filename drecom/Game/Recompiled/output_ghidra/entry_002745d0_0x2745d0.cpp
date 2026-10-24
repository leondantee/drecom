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

// Function: entry_002745d0
// Address: 0x2745d0 - 0x274634
void entry_002745d0_0x2745d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002745d0_0x2745d0");
#endif

    ctx->pc = 0x2745d0u;

    // 0x2745d0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2745d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2745d4: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2745d4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2745d8: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2745d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2745dc: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2745dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2745e0: 0x649821  addu        $s3, $v1, $a0
    ctx->pc = 0x2745e0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2745e4: 0x326300ff  andi        $v1, $s3, 0xFF
    ctx->pc = 0x2745e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
    // 0x2745e8: 0x32200  sll         $a0, $v1, 8
    ctx->pc = 0x2745e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2745ec: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2745ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2745f0: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2745f0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2745f4: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2745f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2745f8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2745f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2745fc: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x2745fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x274600: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x274600u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x274604: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x274604u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x274608: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x274608u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x27460c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x27460cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x274610: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x274610u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x274614: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x274614u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x274618: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x274618u;
    {
        const bool branch_taken_0x274618 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x274618) {
            ctx->pc = 0x274634u;
            return;
        }
    }
    ctx->pc = 0x274620u;
    // 0x274620: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x274620u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x274624: 0x0  nop
    ctx->pc = 0x274624u;
    // NOP
    // 0x274628: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x274628u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x27462c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x27462Cu;
    {
        const bool branch_taken_0x27462c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27462c) {
            ctx->pc = 0x274650u;
            return;
        }
    }
    ctx->pc = 0x274634u;
}
