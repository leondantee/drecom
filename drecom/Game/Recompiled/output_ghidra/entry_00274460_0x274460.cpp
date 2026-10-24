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

// Function: entry_00274460
// Address: 0x274460 - 0x2744c8
void entry_00274460_0x274460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00274460_0x274460");
#endif

    ctx->pc = 0x274460u;

    // 0x274460: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x274460u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x274464: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x274464u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x274468: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x274468u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x27446c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x27446cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x274470: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x274470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x274474: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x274474u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x274478: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x274478u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x27447c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x27447cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x274480: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x274480u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x274484: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x274484u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x274488: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x274488u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x27448c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27448cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x274490: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x274490u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x274494: 0x21a02  srl         $v1, $v0, 8
    ctx->pc = 0x274494u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x274498: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x274498u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x27449c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x27449cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2744a0: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x2744a0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2744a4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2744a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2744a8: 0x3064000f  andi        $a0, $v1, 0xF
    ctx->pc = 0x2744a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x2744ac: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2744ACu;
    {
        const bool branch_taken_0x2744ac = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x2744ac) {
            ctx->pc = 0x2744C8u;
            return;
        }
    }
    ctx->pc = 0x2744B4u;
    // 0x2744b4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2744b4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2744b8: 0x0  nop
    ctx->pc = 0x2744b8u;
    // NOP
    // 0x2744bc: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2744bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2744c0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2744C0u;
    {
        const bool branch_taken_0x2744c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2744c0) {
            ctx->pc = 0x2744E4u;
            return;
        }
    }
    ctx->pc = 0x2744C8u;
}
