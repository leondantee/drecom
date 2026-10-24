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

// Function: entry_00287720
// Address: 0x287720 - 0x2877c0
void entry_00287720_0x287720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00287720_0x287720");
#endif

    ctx->pc = 0x287720u;

    // 0x287720: 0x8e475dc0  lw          $a3, 0x5DC0($s2)
    ctx->pc = 0x287720u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24000)));
    // 0x287724: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x287724u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x287728: 0x14e50025  bne         $a3, $a1, . + 4 + (0x25 << 2)
    ctx->pc = 0x287728u;
    {
        const bool branch_taken_0x287728 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 5));
        if (branch_taken_0x287728) {
            ctx->pc = 0x2877C0u;
            return;
        }
    }
    ctx->pc = 0x287730u;
    // 0x287730: 0x8fa600d0  lw          $a2, 0xD0($sp)
    ctx->pc = 0x287730u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x287734: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x287734u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x287738: 0x3c085555  lui         $t0, 0x5555
    ctx->pc = 0x287738u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)21845 << 16));
    // 0x28773c: 0x35095556  ori         $t1, $t0, 0x5556
    ctx->pc = 0x28773cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)21846);
    // 0x287740: 0x1260018  mult        $zero, $t1, $a2
    ctx->pc = 0x287740u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x287744: 0x627c2  srl         $a0, $a2, 31
    ctx->pc = 0x287744u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x287748: 0x0  nop
    ctx->pc = 0x287748u;
    // NOP
    // 0x28774c: 0x3810  mfhi        $a3
    ctx->pc = 0x28774cu;
    SET_GPR_U64(ctx, 7, ctx->hi);
    // 0x287750: 0xe42821  addu        $a1, $a3, $a0
    ctx->pc = 0x287750u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x287754: 0x8fa600d4  lw          $a2, 0xD4($sp)
    ctx->pc = 0x287754u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x287758: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x287758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x28775c: 0x3c075555  lui         $a3, 0x5555
    ctx->pc = 0x28775cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)21845 << 16));
    // 0x287760: 0x34e35556  ori         $v1, $a3, 0x5556
    ctx->pc = 0x287760u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)21846);
    // 0x287764: 0x660018  mult        $zero, $v1, $a2
    ctx->pc = 0x287764u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x287768: 0x61fc2  srl         $v1, $a2, 31
    ctx->pc = 0x287768u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x28776c: 0x0  nop
    ctx->pc = 0x28776cu;
    // NOP
    // 0x287770: 0x5010  mfhi        $t2
    ctx->pc = 0x287770u;
    SET_GPR_U64(ctx, 10, ctx->hi);
    // 0x287774: 0x1433021  addu        $a2, $t2, $v1
    ctx->pc = 0x287774u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x287778: 0x61200  sll         $v0, $a2, 8
    ctx->pc = 0x287778u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
    // 0x28777c: 0xa25825  or          $t3, $a1, $v0
    ctx->pc = 0x28777cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x287780: 0x8fa500d8  lw          $a1, 0xD8($sp)
    ctx->pc = 0x287780u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x287784: 0x24090003  addiu       $t1, $zero, 0x3
    ctx->pc = 0x287784u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x287788: 0x3c045555  lui         $a0, 0x5555
    ctx->pc = 0x287788u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21845 << 16));
    // 0x28778c: 0x34865556  ori         $a2, $a0, 0x5556
    ctx->pc = 0x28778cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)21846);
    // 0x287790: 0xc50018  mult        $zero, $a2, $a1
    ctx->pc = 0x287790u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x287794: 0x517c2  srl         $v0, $a1, 31
    ctx->pc = 0x287794u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x287798: 0x0  nop
    ctx->pc = 0x287798u;
    // NOP
    // 0x28779c: 0x3010  mfhi        $a2
    ctx->pc = 0x28779cu;
    SET_GPR_U64(ctx, 6, ctx->hi);
    // 0x2877a0: 0xc24021  addu        $t0, $a2, $v0
    ctx->pc = 0x2877a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2877a4: 0x81c00  sll         $v1, $t0, 16
    ctx->pc = 0x2877a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 16));
    // 0x2877a8: 0x6b2825  or          $a1, $v1, $t3
    ctx->pc = 0x2877a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 11));
    // 0x2877ac: 0x8fa600dc  lw          $a2, 0xDC($sp)
    ctx->pc = 0x2877acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x2877b0: 0x64600  sll         $t0, $a2, 24
    ctx->pc = 0x2877b0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
    // 0x2877b4: 0x1051825  or          $v1, $t0, $a1
    ctx->pc = 0x2877b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) | GPR_U64(ctx, 5));
    // 0x2877b8: 0x26090010  addiu       $t1, $s0, 0x10
    ctx->pc = 0x2877b8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2877bc: 0xad230000  sw          $v1, 0x0($t1)
    ctx->pc = 0x2877bcu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 3));
    ctx->pc = 0x2877c0u;
}
