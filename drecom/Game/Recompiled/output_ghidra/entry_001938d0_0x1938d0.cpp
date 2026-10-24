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

// Function: entry_001938d0
// Address: 0x1938d0 - 0x193920
void entry_001938d0_0x1938d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001938d0_0x1938d0");
#endif

    ctx->pc = 0x1938d0u;

    // 0x1938d0: 0x92c20348  lbu         $v0, 0x348($s6)
    ctx->pc = 0x1938d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 840)));
    // 0x1938d4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1938d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1938d8: 0x12020079  beq         $s0, $v0, . + 4 + (0x79 << 2)
    ctx->pc = 0x1938D8u;
    {
        const bool branch_taken_0x1938d8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x1938d8) {
            ctx->pc = 0x193AC0u;
            return;
        }
    }
    ctx->pc = 0x1938E0u;
    // 0x1938e0: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1938e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1938e4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1938e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1938e8: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x1938e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1938ec: 0x8ec20ab8  lw          $v0, 0xAB8($s6)
    ctx->pc = 0x1938ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 2744)));
    // 0x1938f0: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1938f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1938f4: 0x8ec20ab8  lw          $v0, 0xAB8($s6)
    ctx->pc = 0x1938f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 2744)));
    // 0x1938f8: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1938f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1938fc: 0x8ec20290  lw          $v0, 0x290($s6)
    ctx->pc = 0x1938fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 656)));
    // 0x193900: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x193900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x193904: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x193904u;
    {
        const bool branch_taken_0x193904 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x193904) {
            ctx->pc = 0x193920u;
            return;
        }
    }
    ctx->pc = 0x19390Cu;
    // 0x19390c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19390cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x193910: 0x0  nop
    ctx->pc = 0x193910u;
    // NOP
    // 0x193914: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x193914u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x193918: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x193918u;
    {
        const bool branch_taken_0x193918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x193918) {
            ctx->pc = 0x19393Cu;
            return;
        }
    }
    ctx->pc = 0x193920u;
}
