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

// Function: entry_0028710c
// Address: 0x28710c - 0x28719c
void entry_0028710c_0x28710c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0028710c_0x28710c");
#endif

    ctx->pc = 0x28710cu;

    // 0x28710c: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x28710cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x287110: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x287110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x287114: 0x3c075555  lui         $a3, 0x5555
    ctx->pc = 0x287114u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)21845 << 16));
    // 0x287118: 0x34e85556  ori         $t0, $a3, 0x5556
    ctx->pc = 0x287118u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)21846);
    // 0x28711c: 0x1030018  mult        $zero, $t0, $v1
    ctx->pc = 0x28711cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x287120: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x287120u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x287124: 0x0  nop
    ctx->pc = 0x287124u;
    // NOP
    // 0x287128: 0x3010  mfhi        $a2
    ctx->pc = 0x287128u;
    SET_GPR_U64(ctx, 6, ctx->hi);
    // 0x28712c: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x28712cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x287130: 0x8faa00d4  lw          $t2, 0xD4($sp)
    ctx->pc = 0x287130u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x287134: 0x24090003  addiu       $t1, $zero, 0x3
    ctx->pc = 0x287134u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x287138: 0x3c025555  lui         $v0, 0x5555
    ctx->pc = 0x287138u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21845 << 16));
    // 0x28713c: 0x34435556  ori         $v1, $v0, 0x5556
    ctx->pc = 0x28713cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21846);
    // 0x287140: 0x6a0018  mult        $zero, $v1, $t2
    ctx->pc = 0x287140u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x287144: 0xa2fc2  srl         $a1, $t2, 31
    ctx->pc = 0x287144u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 10), 31));
    // 0x287148: 0x0  nop
    ctx->pc = 0x287148u;
    // NOP
    // 0x28714c: 0x2010  mfhi        $a0
    ctx->pc = 0x28714cu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x287150: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x287150u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x287154: 0x33a00  sll         $a3, $v1, 8
    ctx->pc = 0x287154u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x287158: 0xc72825  or          $a1, $a2, $a3
    ctx->pc = 0x287158u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x28715c: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x28715cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x287160: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x287160u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x287164: 0x3c025555  lui         $v0, 0x5555
    ctx->pc = 0x287164u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21845 << 16));
    // 0x287168: 0x34435556  ori         $v1, $v0, 0x5556
    ctx->pc = 0x287168u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21846);
    // 0x28716c: 0x640018  mult        $zero, $v1, $a0
    ctx->pc = 0x28716cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x287170: 0x427c2  srl         $a0, $a0, 31
    ctx->pc = 0x287170u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x287174: 0x0  nop
    ctx->pc = 0x287174u;
    // NOP
    // 0x287178: 0x3010  mfhi        $a2
    ctx->pc = 0x287178u;
    SET_GPR_U64(ctx, 6, ctx->hi);
    // 0x28717c: 0xc41021  addu        $v0, $a2, $a0
    ctx->pc = 0x28717cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x287180: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x287180u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x287184: 0x653825  or          $a3, $v1, $a1
    ctx->pc = 0x287184u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x287188: 0x8fa500dc  lw          $a1, 0xDC($sp)
    ctx->pc = 0x287188u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x28718c: 0x53600  sll         $a2, $a1, 24
    ctx->pc = 0x28718cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x287190: 0xc72025  or          $a0, $a2, $a3
    ctx->pc = 0x287190u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x287194: 0x26090010  addiu       $t1, $s0, 0x10
    ctx->pc = 0x287194u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x287198: 0xad240000  sw          $a0, 0x0($t1)
    ctx->pc = 0x287198u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 4));
    ctx->pc = 0x28719cu;
}
