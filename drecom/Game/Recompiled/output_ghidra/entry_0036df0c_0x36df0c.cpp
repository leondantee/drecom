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

// Function: entry_0036df0c
// Address: 0x36df0c - 0x36df5c
void entry_0036df0c_0x36df0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0036df0c_0x36df0c");
#endif

    ctx->pc = 0x36df0cu;

    // 0x36df0c: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x36df0cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x36df10: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x36df10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x36df14: 0x2463bb40  addiu       $v1, $v1, -0x44C0
    ctx->pc = 0x36df14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949696));
    // 0x36df18: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x36df18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x36df1c: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x36df1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x36df20: 0x90630012  lbu         $v1, 0x12($v1)
    ctx->pc = 0x36df20u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 18)));
    // 0x36df24: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x36df24u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x36df28: 0x2403001b  addiu       $v1, $zero, 0x1B
    ctx->pc = 0x36df28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x36df2c: 0x1483000b  bne         $a0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x36DF2Cu;
    {
        const bool branch_taken_0x36df2c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x36df2c) {
            ctx->pc = 0x36DF5Cu;
            return;
        }
    }
    ctx->pc = 0x36DF34u;
    // 0x36df34: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x36df34u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x36df38: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x36df38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x36df3c: 0x2463bb40  addiu       $v1, $v1, -0x44C0
    ctx->pc = 0x36df3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949696));
    // 0x36df40: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x36df40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x36df44: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x36df44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x36df48: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x36df48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36df4c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x36df4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x36df50: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x36df50u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x36df54: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x36DF54u;
    {
        const bool branch_taken_0x36df54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36df54) {
            ctx->pc = 0x36DF78u;
            return;
        }
    }
    ctx->pc = 0x36DF5Cu;
}
