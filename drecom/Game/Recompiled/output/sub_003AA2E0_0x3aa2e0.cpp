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

// Function: sub_003AA2E0
// Address: 0x3aa2e0 - 0x3aa340
void sub_003AA2E0_0x3aa2e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AA2E0_0x3aa2e0");
#endif

    ctx->pc = 0x3aa2e0u;

    // 0x3aa2e0: 0x105  .word       0x00000105                   # INVALID     $zero, $zero, 0x105 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aa2e0u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x3AA2E0 raw=0x00000105");
    // 0x3aa2e4: 0x0  nop
    ctx->pc = 0x3aa2e4u;
    // NOP
    // 0x3aa2e8: 0x0  nop
    ctx->pc = 0x3aa2e8u;
    // NOP
    // 0x3aa2ec: 0x0  nop
    ctx->pc = 0x3aa2ecu;
    // NOP
    // 0x3aa2f0: 0x0  nop
    ctx->pc = 0x3aa2f0u;
    // NOP
    // 0x3aa2f4: 0x0  nop
    ctx->pc = 0x3aa2f4u;
    // NOP
    // 0x3aa2f8: 0x0  nop
    ctx->pc = 0x3aa2f8u;
    // NOP
    // 0x3aa2fc: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3aa2fcu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
    // 0x3aa300: 0x104  .word       0x00000104                   # sllv        $zero, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aa300u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
    // 0x3aa304: 0x0  nop
    ctx->pc = 0x3aa304u;
    // NOP
    // 0x3aa308: 0x0  nop
    ctx->pc = 0x3aa308u;
    // NOP
    // 0x3aa30c: 0x0  nop
    ctx->pc = 0x3aa30cu;
    // NOP
    // 0x3aa310: 0x0  nop
    ctx->pc = 0x3aa310u;
    // NOP
    // 0x3aa314: 0x0  nop
    ctx->pc = 0x3aa314u;
    // NOP
    // 0x3aa318: 0x0  nop
    ctx->pc = 0x3aa318u;
    // NOP
    // 0x3aa31c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3aa31cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
    // 0x3aa320: 0x24  and         $zero, $zero, $zero
    ctx->pc = 0x3aa320u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
    // 0x3aa324: 0x43480000  .word       0x43480000                   # INVALID     $k0, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3aa324u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1A at 0x3AA324 raw=0x43480000");
    // 0x3aa328: 0xc3480000  ll          $t0, 0x0($k0)
    ctx->pc = 0x3aa328u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 26), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
    // 0x3aa32c: 0x43480000  .word       0x43480000                   # INVALID     $k0, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3aa32cu;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1A at 0x3AA32C raw=0x43480000");
    // 0x3aa330: 0x0  nop
    ctx->pc = 0x3aa330u;
    // NOP
    // 0x3aa334: 0x0  nop
    ctx->pc = 0x3aa334u;
    // NOP
    // 0x3aa338: 0x0  nop
    ctx->pc = 0x3aa338u;
    // NOP
    // 0x3aa33c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3aa33cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
    ctx->pc = 0x3aa340u;
}
