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

// Function: entry_003732b8
// Address: 0x3732b8 - 0x373310
void entry_003732b8_0x3732b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003732b8_0x3732b8");
#endif

    ctx->pc = 0x3732b8u;

    // 0x3732b8: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x3732b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x3732bc: 0x128300da  beq         $s4, $v1, . + 4 + (0xDA << 2)
    ctx->pc = 0x3732BCu;
    {
        const bool branch_taken_0x3732bc = (GPR_U64(ctx, 20) == GPR_U64(ctx, 3));
        if (branch_taken_0x3732bc) {
            ctx->pc = 0x373628u;
            return;
        }
    }
    ctx->pc = 0x3732C4u;
    // 0x3732c4: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x3732c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x3732c8: 0x128300d7  beq         $s4, $v1, . + 4 + (0xD7 << 2)
    ctx->pc = 0x3732C8u;
    {
        const bool branch_taken_0x3732c8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 3));
        if (branch_taken_0x3732c8) {
            ctx->pc = 0x373628u;
            return;
        }
    }
    ctx->pc = 0x3732D0u;
    // 0x3732d0: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x3732d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x3732d4: 0x8c63034c  lw          $v1, 0x34C($v1)
    ctx->pc = 0x3732d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 844)));
    // 0x3732d8: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x3732d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x3732dc: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x3732dcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3732e0: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x3732e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3732e4: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x3732e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x3732e8: 0x1083005e  beq         $a0, $v1, . + 4 + (0x5E << 2)
    ctx->pc = 0x3732E8u;
    {
        const bool branch_taken_0x3732e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3732e8) {
            ctx->pc = 0x373464u;
            return;
        }
    }
    ctx->pc = 0x3732F0u;
    // 0x3732f0: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x3732f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3732f4: 0x10830031  beq         $a0, $v1, . + 4 + (0x31 << 2)
    ctx->pc = 0x3732F4u;
    {
        const bool branch_taken_0x3732f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3732f4) {
            ctx->pc = 0x3733BCu;
            return;
        }
    }
    ctx->pc = 0x3732FCu;
    // 0x3732fc: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x3732fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x373300: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x373300u;
    {
        const bool branch_taken_0x373300 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x373300) {
            ctx->pc = 0x373310u;
            return;
        }
    }
    ctx->pc = 0x373308u;
    // 0x373308: 0x100000c7  b           . + 4 + (0xC7 << 2)
    ctx->pc = 0x373308u;
    {
        const bool branch_taken_0x373308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x373308) {
            ctx->pc = 0x373628u;
            return;
        }
    }
    ctx->pc = 0x373310u;
}
