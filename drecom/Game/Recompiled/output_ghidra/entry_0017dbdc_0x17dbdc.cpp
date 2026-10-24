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

// Function: entry_0017dbdc
// Address: 0x17dbdc - 0x17dc18
void entry_0017dbdc_0x17dbdc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017dbdc_0x17dbdc");
#endif

    ctx->pc = 0x17dbdcu;

    // 0x17dbdc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x17dbdcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17dbe0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x17dbe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x17dbe4: 0x41940  sll         $v1, $a0, 5
    ctx->pc = 0x17dbe4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x17dbe8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x17dbe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x17dbec: 0x32140  sll         $a0, $v1, 5
    ctx->pc = 0x17dbecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x17dbf0: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x17dbf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x17dbf4: 0x24630380  addiu       $v1, $v1, 0x380
    ctx->pc = 0x17dbf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 896));
    // 0x17dbf8: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x17dbf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x17dbfc: 0x3203ffff  andi        $v1, $s0, 0xFFFF
    ctx->pc = 0x17dbfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x17dc00: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x17dc00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x17dc04: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x17dc04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x17dc08: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x17dc08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x17dc0c: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x17dc0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x17dc10: 0x3070ffff  andi        $s0, $v1, 0xFFFF
    ctx->pc = 0x17dc10u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x17dc14: 0x0  nop
    ctx->pc = 0x17dc14u;
    // NOP
    ctx->pc = 0x17dc18u;
}
