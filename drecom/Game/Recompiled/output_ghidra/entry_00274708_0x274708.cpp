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

// Function: entry_00274708
// Address: 0x274708 - 0x27476c
void entry_00274708_0x274708(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00274708_0x274708");
#endif

    ctx->pc = 0x274708u;

    // 0x274708: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x274708u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x27470c: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x27470cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x274710: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x274710u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x274714: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x274714u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x274718: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x274718u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x27471c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x27471cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x274720: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x274720u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x274724: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x274724u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x274728: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x274728u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x27472c: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x27472cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x274730: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x274730u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x274734: 0x64b821  addu        $s7, $v1, $a0
    ctx->pc = 0x274734u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x274738: 0x32e3ff00  andi        $v1, $s7, 0xFF00
    ctx->pc = 0x274738u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)65280);
    // 0x27473c: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x27473cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x274740: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x274740u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x274744: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x274744u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x274748: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x274748u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x27474c: 0x307300ff  andi        $s3, $v1, 0xFF
    ctx->pc = 0x27474cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x274750: 0x6600006  bltz        $s3, . + 4 + (0x6 << 2)
    ctx->pc = 0x274750u;
    {
        const bool branch_taken_0x274750 = (GPR_S32(ctx, 19) < 0);
        if (branch_taken_0x274750) {
            ctx->pc = 0x27476Cu;
            return;
        }
    }
    ctx->pc = 0x274758u;
    // 0x274758: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x274758u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27475c: 0x0  nop
    ctx->pc = 0x27475cu;
    // NOP
    // 0x274760: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x274760u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x274764: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x274764u;
    {
        const bool branch_taken_0x274764 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x274764) {
            ctx->pc = 0x274788u;
            return;
        }
    }
    ctx->pc = 0x27476Cu;
}
