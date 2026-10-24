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

// Function: entry_0031092c
// Address: 0x31092c - 0x310978
void entry_0031092c_0x31092c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0031092c_0x31092c");
#endif

    ctx->pc = 0x31092cu;

    // 0x31092c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x31092cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x310930: 0x946311f6  lhu         $v1, 0x11F6($v1)
    ctx->pc = 0x310930u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4598)));
    // 0x310934: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x310934u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x310938: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x310938u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x31093c: 0x1083000e  beq         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x31093Cu;
    {
        const bool branch_taken_0x31093c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x31093c) {
            ctx->pc = 0x310978u;
            return;
        }
    }
    ctx->pc = 0x310944u;
    // 0x310944: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x310944u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x310948: 0x946311f6  lhu         $v1, 0x11F6($v1)
    ctx->pc = 0x310948u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4598)));
    // 0x31094c: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x31094cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x310950: 0x2403001f  addiu       $v1, $zero, 0x1F
    ctx->pc = 0x310950u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x310954: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x310954u;
    {
        const bool branch_taken_0x310954 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x310954) {
            ctx->pc = 0x310978u;
            return;
        }
    }
    ctx->pc = 0x31095Cu;
    // 0x31095c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x31095cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x310960: 0x846311f2  lh          $v1, 0x11F2($v1)
    ctx->pc = 0x310960u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4594)));
    // 0x310964: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x310964u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x310968: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x310968u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x31096c: 0x28610065  slti        $at, $v1, 0x65
    ctx->pc = 0x31096cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)101) ? 1 : 0);
    // 0x310970: 0x142000e3  bnez        $at, . + 4 + (0xE3 << 2)
    ctx->pc = 0x310970u;
    {
        const bool branch_taken_0x310970 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x310970) {
            ctx->pc = 0x310D00u;
            return;
        }
    }
    ctx->pc = 0x310978u;
}
