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

// Function: entry_001813ec
// Address: 0x1813ec - 0x181438
void entry_001813ec_0x1813ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001813ec_0x1813ec");
#endif

    ctx->pc = 0x1813ecu;

    // 0x1813ec: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1813ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1813f0: 0x0  nop
    ctx->pc = 0x1813f0u;
    // NOP
    // 0x1813f4: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x1813f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x1813f8: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1813f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1813fc: 0x8423f138  lh          $v1, -0xEC8($at)
    ctx->pc = 0x1813fcu;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x47F138u));
    // 0x181400: 0x3343c  dsll32      $a2, $v1, 16
    ctx->pc = 0x181400u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 16));
    // 0x181404: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x181404u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x181408: 0x61900  sll         $v1, $a2, 4
    ctx->pc = 0x181408u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x18140c: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x18140cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x181410: 0x33140  sll         $a2, $v1, 5
    ctx->pc = 0x181410u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x181414: 0x3c03004a  lui         $v1, 0x4A
    ctx->pc = 0x181414u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)74 << 16));
    // 0x181418: 0x24631380  addiu       $v1, $v1, 0x1380
    ctx->pc = 0x181418u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4992));
    // 0x18141c: 0x663821  addu        $a3, $v1, $a2
    ctx->pc = 0x18141cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x181420: 0x8ce60158  lw          $a2, 0x158($a3)
    ctx->pc = 0x181420u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 344)));
    // 0x181424: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x181424u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x181428: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x181428u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x18142c: 0xace60158  sw          $a2, 0x158($a3)
    ctx->pc = 0x18142cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 344), GPR_U32(ctx, 6));
    // 0x181430: 0x100000bd  b           . + 4 + (0xBD << 2)
    ctx->pc = 0x181430u;
    {
        const bool branch_taken_0x181430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x181430) {
            ctx->pc = 0x181728u;
            return;
        }
    }
    ctx->pc = 0x181438u;
}
