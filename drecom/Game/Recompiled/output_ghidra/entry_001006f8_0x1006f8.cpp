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

// Function: entry_001006f8
// Address: 0x1006f8 - 0x1007a0
void entry_001006f8_0x1006f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001006f8_0x1006f8");
#endif

    ctx->pc = 0x1006f8u;

    // 0x1006f8: 0xfe020010  sd          $v0, 0x10($s0)
    ctx->pc = 0x1006f8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 16), GPR_U64(ctx, 2));
    // 0x1006fc: 0x111043  sra         $v0, $s1, 1
    ctx->pc = 0x1006fcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 17), 1));
    // 0x100700: 0x121843  sra         $v1, $s2, 1
    ctx->pc = 0x100700u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 18), 1));
    // 0x100704: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x100704u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x100708: 0x24040800  addiu       $a0, $zero, 0x800
    ctx->pc = 0x100708u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x10070c: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x10070cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x100710: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x100710u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x100714: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x100714u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x100718: 0x82102f  dsubu       $v0, $a0, $v0
    ctx->pc = 0x100718u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) - GPR_U64(ctx, 2));
    // 0x10071c: 0x83202f  dsubu       $a0, $a0, $v1
    ctx->pc = 0x10071cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) - GPR_U64(ctx, 3));
    // 0x100720: 0x2113c  dsll32      $v0, $v0, 4
    ctx->pc = 0x100720u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 4));
    // 0x100724: 0x2646ffff  addiu       $a2, $s2, -0x1
    ctx->pc = 0x100724u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x100728: 0x2625ffff  addiu       $a1, $s1, -0x1
    ctx->pc = 0x100728u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x10072c: 0x42138  dsll        $a0, $a0, 4
    ctx->pc = 0x10072cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 4);
    // 0x100730: 0xde030040  ld          $v1, 0x40($s0)
    ctx->pc = 0x100730u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x100734: 0xde070050  ld          $a3, 0x50($s0)
    ctx->pc = 0x100734u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x100738: 0x52c3c  dsll32      $a1, $a1, 16
    ctx->pc = 0x100738u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 16));
    // 0x10073c: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x10073cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x100740: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x100740u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x100744: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x100744u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x100748: 0xc53025  or          $a2, $a2, $a1
    ctx->pc = 0x100748u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x10074c: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x10074cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x100750: 0x6b1825  or          $v1, $v1, $t3
    ctx->pc = 0x100750u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 11));
    // 0x100754: 0xeb3825  or          $a3, $a3, $t3
    ctx->pc = 0x100754u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 11));
    // 0x100758: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x100758u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x10075c: 0x2408001a  addiu       $t0, $zero, 0x1A
    ctx->pc = 0x10075cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x100760: 0x24090046  addiu       $t1, $zero, 0x46
    ctx->pc = 0x100760u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x100764: 0x240a0045  addiu       $t2, $zero, 0x45
    ctx->pc = 0x100764u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x100768: 0xfe020028  sd          $v0, 0x28($s0)
    ctx->pc = 0x100768u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 40), GPR_U64(ctx, 2));
    // 0x10076c: 0xfe040020  sd          $a0, 0x20($s0)
    ctx->pc = 0x10076cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 4));
    // 0x100770: 0x32820002  andi        $v0, $s4, 0x2
    ctx->pc = 0x100770u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)2);
    // 0x100774: 0xfe050038  sd          $a1, 0x38($s0)
    ctx->pc = 0x100774u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 56), GPR_U64(ctx, 5));
    // 0x100778: 0xfe060030  sd          $a2, 0x30($s0)
    ctx->pc = 0x100778u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 48), GPR_U64(ctx, 6));
    // 0x10077c: 0xfe080048  sd          $t0, 0x48($s0)
    ctx->pc = 0x10077cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 72), GPR_U64(ctx, 8));
    // 0x100780: 0xfe030040  sd          $v1, 0x40($s0)
    ctx->pc = 0x100780u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 64), GPR_U64(ctx, 3));
    // 0x100784: 0xfe090058  sd          $t1, 0x58($s0)
    ctx->pc = 0x100784u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 88), GPR_U64(ctx, 9));
    // 0x100788: 0xfe070050  sd          $a3, 0x50($s0)
    ctx->pc = 0x100788u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 80), GPR_U64(ctx, 7));
    // 0x10078c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10078Cu;
    {
        const bool branch_taken_0x10078c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x100790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10078Cu;
        // 0x100790: 0xfe0a0068  sd          $t2, 0x68($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 104), GPR_U64(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10078c) {
            ctx->pc = 0x1007A0u;
            return;
        }
    }
    ctx->pc = 0x100794u;
    // 0x100794: 0xde020060  ld          $v0, 0x60($s0)
    ctx->pc = 0x100794u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x100798: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x100798u;
    {
        const bool branch_taken_0x100798 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10079Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100798u;
        // 0x10079c: 0x4b1025  or          $v0, $v0, $t3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100798) {
            ctx->pc = 0x1007ACu;
            return;
        }
    }
    ctx->pc = 0x1007A0u;
}
