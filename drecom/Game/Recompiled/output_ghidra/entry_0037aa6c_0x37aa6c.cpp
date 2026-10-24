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

// Function: entry_0037aa6c
// Address: 0x37aa6c - 0x37ab00
void entry_0037aa6c_0x37aa6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0037aa6c_0x37aa6c");
#endif

    ctx->pc = 0x37aa6cu;

    // 0x37aa6c: 0x8fa600a0  lw          $a2, 0xA0($sp)
    ctx->pc = 0x37aa6cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x37aa70: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x37aa70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x37aa74: 0x3c035555  lui         $v1, 0x5555
    ctx->pc = 0x37aa74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)21845 << 16));
    // 0x37aa78: 0x34625556  ori         $v0, $v1, 0x5556
    ctx->pc = 0x37aa78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)21846);
    // 0x37aa7c: 0x460018  mult        $zero, $v0, $a2
    ctx->pc = 0x37aa7cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x37aa80: 0x61fc2  srl         $v1, $a2, 31
    ctx->pc = 0x37aa80u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x37aa84: 0x0  nop
    ctx->pc = 0x37aa84u;
    // NOP
    // 0x37aa88: 0x1010  mfhi        $v0
    ctx->pc = 0x37aa88u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x37aa8c: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x37aa8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x37aa90: 0x8fa600a4  lw          $a2, 0xA4($sp)
    ctx->pc = 0x37aa90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x37aa94: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x37aa94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x37aa98: 0x3c025555  lui         $v0, 0x5555
    ctx->pc = 0x37aa98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21845 << 16));
    // 0x37aa9c: 0x34475556  ori         $a3, $v0, 0x5556
    ctx->pc = 0x37aa9cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21846);
    // 0x37aaa0: 0xe60018  mult        $zero, $a3, $a2
    ctx->pc = 0x37aaa0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x37aaa4: 0x637c2  srl         $a2, $a2, 31
    ctx->pc = 0x37aaa4u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x37aaa8: 0x0  nop
    ctx->pc = 0x37aaa8u;
    // NOP
    // 0x37aaac: 0x1010  mfhi        $v0
    ctx->pc = 0x37aaacu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x37aab0: 0x463021  addu        $a2, $v0, $a2
    ctx->pc = 0x37aab0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x37aab4: 0x61200  sll         $v0, $a2, 8
    ctx->pc = 0x37aab4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
    // 0x37aab8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x37aab8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x37aabc: 0x8fa700a8  lw          $a3, 0xA8($sp)
    ctx->pc = 0x37aabcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x37aac0: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x37aac0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x37aac4: 0x3c025555  lui         $v0, 0x5555
    ctx->pc = 0x37aac4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21845 << 16));
    // 0x37aac8: 0x34425556  ori         $v0, $v0, 0x5556
    ctx->pc = 0x37aac8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21846);
    // 0x37aacc: 0x470018  mult        $zero, $v0, $a3
    ctx->pc = 0x37aaccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x37aad0: 0x727c2  srl         $a0, $a3, 31
    ctx->pc = 0x37aad0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 7), 31));
    // 0x37aad4: 0x0  nop
    ctx->pc = 0x37aad4u;
    // NOP
    // 0x37aad8: 0x1010  mfhi        $v0
    ctx->pc = 0x37aad8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x37aadc: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x37aadcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x37aae0: 0x41400  sll         $v0, $a0, 16
    ctx->pc = 0x37aae0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x37aae4: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x37aae4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x37aae8: 0x8fa600ac  lw          $a2, 0xAC($sp)
    ctx->pc = 0x37aae8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x37aaec: 0x61600  sll         $v0, $a2, 24
    ctx->pc = 0x37aaecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
    // 0x37aaf0: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x37aaf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x37aaf4: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x37aaf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x37aaf8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x37aaf8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x37aafc: 0x0  nop
    ctx->pc = 0x37aafcu;
    // NOP
    ctx->pc = 0x37ab00u;
}
