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

// Function: entry_0034152c
// Address: 0x34152c - 0x3415dc
void entry_0034152c_0x34152c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0034152c_0x34152c");
#endif

    ctx->pc = 0x34152cu;

    // 0x34152c: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x34152cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x341530: 0x9463000e  lhu         $v1, 0xE($v1)
    ctx->pc = 0x341530u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
    // 0x341534: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x341534u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x341538: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x341538u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x34153c: 0x146000bd  bnez        $v1, . + 4 + (0xBD << 2)
    ctx->pc = 0x34153Cu;
    {
        const bool branch_taken_0x34153c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x34153c) {
            ctx->pc = 0x341834u;
            return;
        }
    }
    ctx->pc = 0x341544u;
    // 0x341544: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x341544u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x341548: 0x946211f6  lhu         $v0, 0x11F6($v1)
    ctx->pc = 0x341548u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4598)));
    // 0x34154c: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x34154cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x341550: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x341550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x341554: 0x10620070  beq         $v1, $v0, . + 4 + (0x70 << 2)
    ctx->pc = 0x341554u;
    {
        const bool branch_taken_0x341554 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x341554) {
            ctx->pc = 0x341718u;
            return;
        }
    }
    ctx->pc = 0x34155Cu;
    // 0x34155c: 0x2402001f  addiu       $v0, $zero, 0x1F
    ctx->pc = 0x34155cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x341560: 0x1062006d  beq         $v1, $v0, . + 4 + (0x6D << 2)
    ctx->pc = 0x341560u;
    {
        const bool branch_taken_0x341560 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x341560) {
            ctx->pc = 0x341718u;
            return;
        }
    }
    ctx->pc = 0x341568u;
    // 0x341568: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x341568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x34156c: 0x1062006a  beq         $v1, $v0, . + 4 + (0x6A << 2)
    ctx->pc = 0x34156Cu;
    {
        const bool branch_taken_0x34156c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x34156c) {
            ctx->pc = 0x341718u;
            return;
        }
    }
    ctx->pc = 0x341574u;
    // 0x341574: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x341574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x341578: 0x10620067  beq         $v1, $v0, . + 4 + (0x67 << 2)
    ctx->pc = 0x341578u;
    {
        const bool branch_taken_0x341578 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x341578) {
            ctx->pc = 0x341718u;
            return;
        }
    }
    ctx->pc = 0x341580u;
    // 0x341580: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x341580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x341584: 0x10620064  beq         $v1, $v0, . + 4 + (0x64 << 2)
    ctx->pc = 0x341584u;
    {
        const bool branch_taken_0x341584 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x341584) {
            ctx->pc = 0x341718u;
            return;
        }
    }
    ctx->pc = 0x34158Cu;
    // 0x34158c: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x34158cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x341590: 0x10620061  beq         $v1, $v0, . + 4 + (0x61 << 2)
    ctx->pc = 0x341590u;
    {
        const bool branch_taken_0x341590 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x341590) {
            ctx->pc = 0x341718u;
            return;
        }
    }
    ctx->pc = 0x341598u;
    // 0x341598: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x341598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x34159c: 0x1062005e  beq         $v1, $v0, . + 4 + (0x5E << 2)
    ctx->pc = 0x34159Cu;
    {
        const bool branch_taken_0x34159c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x34159c) {
            ctx->pc = 0x341718u;
            return;
        }
    }
    ctx->pc = 0x3415A4u;
    // 0x3415a4: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x3415a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x3415a8: 0x1062005b  beq         $v1, $v0, . + 4 + (0x5B << 2)
    ctx->pc = 0x3415A8u;
    {
        const bool branch_taken_0x3415a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3415a8) {
            ctx->pc = 0x341718u;
            return;
        }
    }
    ctx->pc = 0x3415B0u;
    // 0x3415b0: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x3415b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x3415b4: 0x10620058  beq         $v1, $v0, . + 4 + (0x58 << 2)
    ctx->pc = 0x3415B4u;
    {
        const bool branch_taken_0x3415b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3415b4) {
            ctx->pc = 0x341718u;
            return;
        }
    }
    ctx->pc = 0x3415BCu;
    // 0x3415bc: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x3415bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x3415c0: 0x10620055  beq         $v1, $v0, . + 4 + (0x55 << 2)
    ctx->pc = 0x3415C0u;
    {
        const bool branch_taken_0x3415c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3415c0) {
            ctx->pc = 0x341718u;
            return;
        }
    }
    ctx->pc = 0x3415C8u;
    // 0x3415c8: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x3415c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x3415cc: 0x10620052  beq         $v1, $v0, . + 4 + (0x52 << 2)
    ctx->pc = 0x3415CCu;
    {
        const bool branch_taken_0x3415cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3415cc) {
            ctx->pc = 0x341718u;
            return;
        }
    }
    ctx->pc = 0x3415D4u;
    // 0x3415d4: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x3415D4u;
    {
        const bool branch_taken_0x3415d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3415d4) {
            ctx->pc = 0x3415DCu;
            return;
        }
    }
    ctx->pc = 0x3415DCu;
}
