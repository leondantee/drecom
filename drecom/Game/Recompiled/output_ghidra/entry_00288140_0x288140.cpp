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

// Function: entry_00288140
// Address: 0x288140 - 0x2881e0
void entry_00288140_0x288140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00288140_0x288140");
#endif

    ctx->pc = 0x288140u;

    // 0x288140: 0x8e475dc0  lw          $a3, 0x5DC0($s2)
    ctx->pc = 0x288140u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24000)));
    // 0x288144: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x288144u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x288148: 0x14e90025  bne         $a3, $t1, . + 4 + (0x25 << 2)
    ctx->pc = 0x288148u;
    {
        const bool branch_taken_0x288148 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 9));
        if (branch_taken_0x288148) {
            ctx->pc = 0x2881E0u;
            return;
        }
    }
    ctx->pc = 0x288150u;
    // 0x288150: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x288150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x288154: 0x24080003  addiu       $t0, $zero, 0x3
    ctx->pc = 0x288154u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x288158: 0x3c065555  lui         $a2, 0x5555
    ctx->pc = 0x288158u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)21845 << 16));
    // 0x28815c: 0x34c75556  ori         $a3, $a2, 0x5556
    ctx->pc = 0x28815cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)21846);
    // 0x288160: 0xe20018  mult        $zero, $a3, $v0
    ctx->pc = 0x288160u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x288164: 0x247c2  srl         $t0, $v0, 31
    ctx->pc = 0x288164u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x288168: 0x0  nop
    ctx->pc = 0x288168u;
    // NOP
    // 0x28816c: 0x3810  mfhi        $a3
    ctx->pc = 0x28816cu;
    SET_GPR_U64(ctx, 7, ctx->hi);
    // 0x288170: 0xe84821  addu        $t1, $a3, $t0
    ctx->pc = 0x288170u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x288174: 0x8fa600d4  lw          $a2, 0xD4($sp)
    ctx->pc = 0x288174u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x288178: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x288178u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x28817c: 0x3c0a5555  lui         $t2, 0x5555
    ctx->pc = 0x28817cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)21845 << 16));
    // 0x288180: 0x35425556  ori         $v0, $t2, 0x5556
    ctx->pc = 0x288180u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)21846);
    // 0x288184: 0x460018  mult        $zero, $v0, $a2
    ctx->pc = 0x288184u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x288188: 0x637c2  srl         $a2, $a2, 31
    ctx->pc = 0x288188u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x28818c: 0x0  nop
    ctx->pc = 0x28818cu;
    // NOP
    // 0x288190: 0x1810  mfhi        $v1
    ctx->pc = 0x288190u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x288194: 0x664021  addu        $t0, $v1, $a2
    ctx->pc = 0x288194u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x288198: 0x83a00  sll         $a3, $t0, 8
    ctx->pc = 0x288198u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x28819c: 0x1275825  or          $t3, $t1, $a3
    ctx->pc = 0x28819cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 9) | GPR_U64(ctx, 7));
    // 0x2881a0: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x2881a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x2881a4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2881a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2881a8: 0x3c095555  lui         $t1, 0x5555
    ctx->pc = 0x2881a8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)21845 << 16));
    // 0x2881ac: 0x35265556  ori         $a2, $t1, 0x5556
    ctx->pc = 0x2881acu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)21846);
    // 0x2881b0: 0xc20018  mult        $zero, $a2, $v0
    ctx->pc = 0x2881b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x2881b4: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x2881b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x2881b8: 0x0  nop
    ctx->pc = 0x2881b8u;
    // NOP
    // 0x2881bc: 0x1010  mfhi        $v0
    ctx->pc = 0x2881bcu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x2881c0: 0x434021  addu        $t0, $v0, $v1
    ctx->pc = 0x2881c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2881c4: 0x83c00  sll         $a3, $t0, 16
    ctx->pc = 0x2881c4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 16));
    // 0x2881c8: 0xeb1825  or          $v1, $a3, $t3
    ctx->pc = 0x2881c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | GPR_U64(ctx, 11));
    // 0x2881cc: 0x8fa600dc  lw          $a2, 0xDC($sp)
    ctx->pc = 0x2881ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x2881d0: 0x63600  sll         $a2, $a2, 24
    ctx->pc = 0x2881d0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
    // 0x2881d4: 0xc35025  or          $t2, $a2, $v1
    ctx->pc = 0x2881d4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x2881d8: 0x26090010  addiu       $t1, $s0, 0x10
    ctx->pc = 0x2881d8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2881dc: 0xad2a0000  sw          $t2, 0x0($t1)
    ctx->pc = 0x2881dcu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 10));
    ctx->pc = 0x2881e0u;
}
