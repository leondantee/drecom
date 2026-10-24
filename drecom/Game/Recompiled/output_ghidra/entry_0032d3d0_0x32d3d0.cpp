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

// Function: entry_0032d3d0
// Address: 0x32d3d0 - 0x32d408
void entry_0032d3d0_0x32d3d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032d3d0_0x32d3d0");
#endif

    ctx->pc = 0x32d3d0u;

    // 0x32d3d0: 0x923e000d  lbu         $fp, 0xD($s1)
    ctx->pc = 0x32d3d0u;
    SET_GPR_ZE32(ctx, 30, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 13)));
    // 0x32d3d4: 0x33c200ff  andi        $v0, $fp, 0xFF
    ctx->pc = 0x32d3d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)255);
    // 0x32d3d8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x32d3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32d3dc: 0x1443000a  bne         $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x32D3DCu;
    {
        const bool branch_taken_0x32d3dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x32d3dc) {
            ctx->pc = 0x32D408u;
            return;
        }
    }
    ctx->pc = 0x32D3E4u;
    // 0x32d3e4: 0x86220010  lh          $v0, 0x10($s1)
    ctx->pc = 0x32d3e4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x32d3e8: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x32d3e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x32d3ec: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x32d3ecu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x32d3f0: 0x219c0  sll         $v1, $v0, 7
    ctx->pc = 0x32d3f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x32d3f4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x32d3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x32d3f8: 0x31083  sra         $v0, $v1, 2
    ctx->pc = 0x32d3f8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 2));
    // 0x32d3fc: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x32d3fcu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x32d400: 0xafa300ac  sw          $v1, 0xAC($sp)
    ctx->pc = 0x32d400u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 3));
    // 0x32d404: 0x0  nop
    ctx->pc = 0x32d404u;
    // NOP
    ctx->pc = 0x32d408u;
}
