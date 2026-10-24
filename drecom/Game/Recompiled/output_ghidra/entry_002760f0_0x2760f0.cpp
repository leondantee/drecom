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

// Function: entry_002760f0
// Address: 0x2760f0 - 0x276154
void entry_002760f0_0x2760f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002760f0_0x2760f0");
#endif

    ctx->pc = 0x2760f0u;

    // 0x2760f0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2760f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2760f4: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2760f4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2760f8: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2760f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2760fc: 0x2f080  sll         $fp, $v0, 2
    ctx->pc = 0x2760fcu;
    SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x276100: 0x3c21021  addu        $v0, $fp, $v0
    ctx->pc = 0x276100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
    // 0x276104: 0x305600ff  andi        $s6, $v0, 0xFF
    ctx->pc = 0x276104u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x276108: 0x161a00  sll         $v1, $s6, 8
    ctx->pc = 0x276108u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 22), 8));
    // 0x27610c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x27610cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x276110: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x276110u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x276114: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x276114u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x276118: 0x29880  sll         $s3, $v0, 2
    ctx->pc = 0x276118u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x27611c: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x27611cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x276120: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x276120u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x276124: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x276124u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x276128: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x276128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x27612c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x27612cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x276130: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x276130u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x276134: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x276134u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x276138: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x276138u;
    {
        const bool branch_taken_0x276138 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x276138) {
            ctx->pc = 0x276154u;
            return;
        }
    }
    ctx->pc = 0x276140u;
    // 0x276140: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x276140u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x276144: 0x0  nop
    ctx->pc = 0x276144u;
    // NOP
    // 0x276148: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x276148u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x27614c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x27614Cu;
    {
        const bool branch_taken_0x27614c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27614c) {
            ctx->pc = 0x276170u;
            return;
        }
    }
    ctx->pc = 0x276154u;
}
