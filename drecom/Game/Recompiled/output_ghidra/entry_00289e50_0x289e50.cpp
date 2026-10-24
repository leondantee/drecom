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

// Function: entry_00289e50
// Address: 0x289e50 - 0x289ef0
void entry_00289e50_0x289e50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00289e50_0x289e50");
#endif

    ctx->pc = 0x289e50u;

    // 0x289e50: 0x8e475dc0  lw          $a3, 0x5DC0($s2)
    ctx->pc = 0x289e50u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24000)));
    // 0x289e54: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x289e54u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x289e58: 0x14e90025  bne         $a3, $t1, . + 4 + (0x25 << 2)
    ctx->pc = 0x289E58u;
    {
        const bool branch_taken_0x289e58 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 9));
        if (branch_taken_0x289e58) {
            ctx->pc = 0x289EF0u;
            return;
        }
    }
    ctx->pc = 0x289E60u;
    // 0x289e60: 0x8fa600d0  lw          $a2, 0xD0($sp)
    ctx->pc = 0x289e60u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x289e64: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x289e64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x289e68: 0x3c0a5555  lui         $t2, 0x5555
    ctx->pc = 0x289e68u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)21845 << 16));
    // 0x289e6c: 0x35425556  ori         $v0, $t2, 0x5556
    ctx->pc = 0x289e6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)21846);
    // 0x289e70: 0x460018  mult        $zero, $v0, $a2
    ctx->pc = 0x289e70u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x289e74: 0x637c2  srl         $a2, $a2, 31
    ctx->pc = 0x289e74u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x289e78: 0x0  nop
    ctx->pc = 0x289e78u;
    // NOP
    // 0x289e7c: 0x1810  mfhi        $v1
    ctx->pc = 0x289e7cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x289e80: 0x664021  addu        $t0, $v1, $a2
    ctx->pc = 0x289e80u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x289e84: 0x8fa700d4  lw          $a3, 0xD4($sp)
    ctx->pc = 0x289e84u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x289e88: 0x240b0003  addiu       $t3, $zero, 0x3
    ctx->pc = 0x289e88u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x289e8c: 0x3c035555  lui         $v1, 0x5555
    ctx->pc = 0x289e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)21845 << 16));
    // 0x289e90: 0x34625556  ori         $v0, $v1, 0x5556
    ctx->pc = 0x289e90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)21846);
    // 0x289e94: 0x470018  mult        $zero, $v0, $a3
    ctx->pc = 0x289e94u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x289e98: 0x737c2  srl         $a2, $a3, 31
    ctx->pc = 0x289e98u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 7), 31));
    // 0x289e9c: 0x0  nop
    ctx->pc = 0x289e9cu;
    // NOP
    // 0x289ea0: 0x4810  mfhi        $t1
    ctx->pc = 0x289ea0u;
    SET_GPR_U64(ctx, 9, ctx->hi);
    // 0x289ea4: 0x1261821  addu        $v1, $t1, $a2
    ctx->pc = 0x289ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
    // 0x289ea8: 0x31200  sll         $v0, $v1, 8
    ctx->pc = 0x289ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x289eac: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x289eacu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x289eb0: 0x8fa700d8  lw          $a3, 0xD8($sp)
    ctx->pc = 0x289eb0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x289eb4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x289eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x289eb8: 0x3c065555  lui         $a2, 0x5555
    ctx->pc = 0x289eb8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)21845 << 16));
    // 0x289ebc: 0x34c65556  ori         $a2, $a2, 0x5556
    ctx->pc = 0x289ebcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)21846);
    // 0x289ec0: 0xc70018  mult        $zero, $a2, $a3
    ctx->pc = 0x289ec0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x289ec4: 0x757c2  srl         $t2, $a3, 31
    ctx->pc = 0x289ec4u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 7), 31));
    // 0x289ec8: 0x0  nop
    ctx->pc = 0x289ec8u;
    // NOP
    // 0x289ecc: 0x4810  mfhi        $t1
    ctx->pc = 0x289eccu;
    SET_GPR_U64(ctx, 9, ctx->hi);
    // 0x289ed0: 0x12a1821  addu        $v1, $t1, $t2
    ctx->pc = 0x289ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
    // 0x289ed4: 0x31400  sll         $v0, $v1, 16
    ctx->pc = 0x289ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x289ed8: 0x482825  or          $a1, $v0, $t0
    ctx->pc = 0x289ed8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x289edc: 0x8fa400dc  lw          $a0, 0xDC($sp)
    ctx->pc = 0x289edcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x289ee0: 0x41e00  sll         $v1, $a0, 24
    ctx->pc = 0x289ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x289ee4: 0x653825  or          $a3, $v1, $a1
    ctx->pc = 0x289ee4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x289ee8: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x289ee8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x289eec: 0xaca70000  sw          $a3, 0x0($a1)
    ctx->pc = 0x289eecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 7));
    ctx->pc = 0x289ef0u;
}
