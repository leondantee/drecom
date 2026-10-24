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

// Function: entry_00135548
// Address: 0x135548 - 0x135564
void entry_00135548_0x135548(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00135548_0x135548");
#endif

    ctx->pc = 0x135548u;

    // 0x135548: 0x3c024016  lui         $v0, 0x4016
    ctx->pc = 0x135548u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16406 << 16));
    // 0x13554c: 0x3442cbe4  ori         $v0, $v0, 0xCBE4
    ctx->pc = 0x13554cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52196);
    // 0x135550: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x135550u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x135554: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x135554u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x135558: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x135558u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x13555c: 0xc040ce4  jal         func_103390
    ctx->pc = 0x13555Cu;
    SET_GPR_U32(ctx, 31, 0x135564u);
    ctx->pc = 0x103390u;
    {
        ctx->pc = 0x135564u;
        ps2_stubs::sceVu0RotMatrixZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x135564u) { return; }
    ctx->pc = 0x135564u;
}
