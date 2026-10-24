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

// Function: entry_0032ef80
// Address: 0x32ef80 - 0x32f020
void entry_0032ef80_0x32ef80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032ef80_0x32ef80");
#endif

    ctx->pc = 0x32ef80u;

    // 0x32ef80: 0x8ee35dc0  lw          $v1, 0x5DC0($s7)
    ctx->pc = 0x32ef80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 24000)));
    // 0x32ef84: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x32ef84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32ef88: 0x14620025  bne         $v1, $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x32EF88u;
    {
        const bool branch_taken_0x32ef88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x32ef88) {
            ctx->pc = 0x32F020u;
            return;
        }
    }
    ctx->pc = 0x32EF90u;
    // 0x32ef90: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x32ef90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x32ef94: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x32ef94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x32ef98: 0x3c035555  lui         $v1, 0x5555
    ctx->pc = 0x32ef98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)21845 << 16));
    // 0x32ef9c: 0x34635556  ori         $v1, $v1, 0x5556
    ctx->pc = 0x32ef9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)21846);
    // 0x32efa0: 0x620018  mult        $zero, $v1, $v0
    ctx->pc = 0x32efa0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x32efa4: 0x23fc2  srl         $a3, $v0, 31
    ctx->pc = 0x32efa4u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x32efa8: 0x0  nop
    ctx->pc = 0x32efa8u;
    // NOP
    // 0x32efac: 0x2010  mfhi        $a0
    ctx->pc = 0x32efacu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x32efb0: 0x871021  addu        $v0, $a0, $a3
    ctx->pc = 0x32efb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x32efb4: 0x8fa500a4  lw          $a1, 0xA4($sp)
    ctx->pc = 0x32efb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x32efb8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x32efb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x32efbc: 0x3c035555  lui         $v1, 0x5555
    ctx->pc = 0x32efbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)21845 << 16));
    // 0x32efc0: 0x34645556  ori         $a0, $v1, 0x5556
    ctx->pc = 0x32efc0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)21846);
    // 0x32efc4: 0x850018  mult        $zero, $a0, $a1
    ctx->pc = 0x32efc4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x32efc8: 0x527c2  srl         $a0, $a1, 31
    ctx->pc = 0x32efc8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x32efcc: 0x0  nop
    ctx->pc = 0x32efccu;
    // NOP
    // 0x32efd0: 0x1810  mfhi        $v1
    ctx->pc = 0x32efd0u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x32efd4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x32efd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x32efd8: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x32efd8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x32efdc: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x32efdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x32efe0: 0x8fa500a8  lw          $a1, 0xA8($sp)
    ctx->pc = 0x32efe0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x32efe4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x32efe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x32efe8: 0x3c025555  lui         $v0, 0x5555
    ctx->pc = 0x32efe8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21845 << 16));
    // 0x32efec: 0x34445556  ori         $a0, $v0, 0x5556
    ctx->pc = 0x32efecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21846);
    // 0x32eff0: 0x850018  mult        $zero, $a0, $a1
    ctx->pc = 0x32eff0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x32eff4: 0x52fc2  srl         $a1, $a1, 31
    ctx->pc = 0x32eff4u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x32eff8: 0x0  nop
    ctx->pc = 0x32eff8u;
    // NOP
    // 0x32effc: 0x1010  mfhi        $v0
    ctx->pc = 0x32effcu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x32f000: 0x452021  addu        $a0, $v0, $a1
    ctx->pc = 0x32f000u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x32f004: 0x41400  sll         $v0, $a0, 16
    ctx->pc = 0x32f004u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x32f008: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x32f008u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x32f00c: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x32f00cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x32f010: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x32f010u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x32f014: 0x441825  or          $v1, $v0, $a0
    ctx->pc = 0x32f014u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x32f018: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x32f018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x32f01c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x32f01cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    ctx->pc = 0x32f020u;
}
