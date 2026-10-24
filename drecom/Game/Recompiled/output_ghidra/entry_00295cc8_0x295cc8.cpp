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

// Function: entry_00295cc8
// Address: 0x295cc8 - 0x295d3c
void entry_00295cc8_0x295cc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00295cc8_0x295cc8");
#endif

    ctx->pc = 0x295cc8u;

    // 0x295cc8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x295cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x295ccc: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x295cccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x295cd0: 0xae0369b0  sw          $v1, 0x69B0($s0)
    ctx->pc = 0x295cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 27056), GPR_U32(ctx, 3));
    // 0x295cd4: 0x8e0369b0  lw          $v1, 0x69B0($s0)
    ctx->pc = 0x295cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 27056)));
    // 0x295cd8: 0xae0369b4  sw          $v1, 0x69B4($s0)
    ctx->pc = 0x295cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 27060), GPR_U32(ctx, 3));
    // 0x295cdc: 0x3c030081  lui         $v1, 0x81
    ctx->pc = 0x295cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)129 << 16));
    // 0x295ce0: 0x2463ca10  addiu       $v1, $v1, -0x35F0
    ctx->pc = 0x295ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953488));
    // 0x295ce4: 0xae0369bc  sw          $v1, 0x69BC($s0)
    ctx->pc = 0x295ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 27068), GPR_U32(ctx, 3));
    // 0x295ce8: 0x8e0369bc  lw          $v1, 0x69BC($s0)
    ctx->pc = 0x295ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 27068)));
    // 0x295cec: 0xae0369c0  sw          $v1, 0x69C0($s0)
    ctx->pc = 0x295cecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 27072), GPR_U32(ctx, 3));
    // 0x295cf0: 0xae00699c  sw          $zero, 0x699C($s0)
    ctx->pc = 0x295cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 27036), GPR_U32(ctx, 0));
    // 0x295cf4: 0x2403012c  addiu       $v1, $zero, 0x12C
    ctx->pc = 0x295cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
    // 0x295cf8: 0xa60369a8  sh          $v1, 0x69A8($s0)
    ctx->pc = 0x295cf8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 27048), (uint16_t)GPR_U32(ctx, 3));
    // 0x295cfc: 0x240300fa  addiu       $v1, $zero, 0xFA
    ctx->pc = 0x295cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
    // 0x295d00: 0xa60369aa  sh          $v1, 0x69AA($s0)
    ctx->pc = 0x295d00u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 27050), (uint16_t)GPR_U32(ctx, 3));
    // 0x295d04: 0xa20069c9  sb          $zero, 0x69C9($s0)
    ctx->pc = 0x295d04u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 27081), (uint8_t)GPR_U32(ctx, 0));
    // 0x295d08: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x295d08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x295d0c: 0xa20369ca  sb          $v1, 0x69CA($s0)
    ctx->pc = 0x295d0cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 27082), (uint8_t)GPR_U32(ctx, 3));
    // 0x295d10: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x295d10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x295d14: 0xa20369cb  sb          $v1, 0x69CB($s0)
    ctx->pc = 0x295d14u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 27083), (uint8_t)GPR_U32(ctx, 3));
    // 0x295d18: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x295d18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x295d1c: 0xa20369cc  sb          $v1, 0x69CC($s0)
    ctx->pc = 0x295d1cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 27084), (uint8_t)GPR_U32(ctx, 3));
    // 0x295d20: 0xa20069d0  sb          $zero, 0x69D0($s0)
    ctx->pc = 0x295d20u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 27088), (uint8_t)GPR_U32(ctx, 0));
    // 0x295d24: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x295d24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x295d28: 0xae0369d4  sw          $v1, 0x69D4($s0)
    ctx->pc = 0x295d28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 27092), GPR_U32(ctx, 3));
    // 0x295d2c: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x295d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x295d30: 0xae0369d8  sw          $v1, 0x69D8($s0)
    ctx->pc = 0x295d30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 27096), GPR_U32(ctx, 3));
    // 0x295d34: 0x100000bb  b           . + 4 + (0xBB << 2)
    ctx->pc = 0x295D34u;
    {
        const bool branch_taken_0x295d34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x295d34) {
            ctx->pc = 0x296024u;
            return;
        }
    }
    ctx->pc = 0x295D3Cu;
}
