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

// Function: entry_00255f30
// Address: 0x255f30 - 0x256004
void entry_00255f30_0x255f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00255f30_0x255f30");
#endif

    ctx->pc = 0x255f30u;

    // 0x255f30: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x255f30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x255f34: 0xfe030028  sd          $v1, 0x28($s0)
    ctx->pc = 0x255f34u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 40), GPR_U64(ctx, 3));
    // 0x255f38: 0xde620000  ld          $v0, 0x0($s3)
    ctx->pc = 0x255f38u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x255f3c: 0x223fc  dsll32      $a0, $v0, 15
    ctx->pc = 0x255f3cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 15));
    // 0x255f40: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x255f40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x255f44: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x255f44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x255f48: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x255f48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x255f4c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x255f4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x255f50: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x255f50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x255f54: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x255f54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x255f58: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x255f58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
    // 0x255f5c: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x255f5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x255f60: 0xfe020030  sd          $v0, 0x30($s0)
    ctx->pc = 0x255f60u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 48), GPR_U64(ctx, 2));
    // 0x255f64: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x255f64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x255f68: 0x26050030  addiu       $a1, $s0, 0x30
    ctx->pc = 0x255f68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x255f6c: 0x90a20008  lbu         $v0, 0x8($a1)
    ctx->pc = 0x255f6cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x255f70: 0x3084000f  andi        $a0, $a0, 0xF
    ctx->pc = 0x255f70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x255f74: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x255f74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x255f78: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x255f78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x255f7c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x255f7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x255f80: 0xa0a20008  sb          $v0, 0x8($a1)
    ctx->pc = 0x255f80u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 8), (uint8_t)GPR_U32(ctx, 2));
    // 0x255f84: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x255f84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x255f88: 0x26050030  addiu       $a1, $s0, 0x30
    ctx->pc = 0x255f88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x255f8c: 0x90a40008  lbu         $a0, 0x8($a1)
    ctx->pc = 0x255f8cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x255f90: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x255f90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x255f94: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x255f94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x255f98: 0x2402ff0f  addiu       $v0, $zero, -0xF1
    ctx->pc = 0x255f98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967055));
    // 0x255f9c: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x255f9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x255fa0: 0x433025  or          $a2, $v0, $v1
    ctx->pc = 0x255fa0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x255fa4: 0xa0a60008  sb          $a2, 0x8($a1)
    ctx->pc = 0x255fa4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 8), (uint8_t)GPR_U32(ctx, 6));
    // 0x255fa8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x255fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x255fac: 0x26050030  addiu       $a1, $s0, 0x30
    ctx->pc = 0x255facu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x255fb0: 0x90a40009  lbu         $a0, 0x9($a1)
    ctx->pc = 0x255fb0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 9)));
    // 0x255fb4: 0x3043000f  andi        $v1, $v0, 0xF
    ctx->pc = 0x255fb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x255fb8: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x255fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x255fbc: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x255fbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x255fc0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x255fc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x255fc4: 0xa0a20009  sb          $v0, 0x9($a1)
    ctx->pc = 0x255fc4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 9), (uint8_t)GPR_U32(ctx, 2));
    // 0x255fc8: 0x2a430030  slti        $v1, $s2, 0x30
    ctx->pc = 0x255fc8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x255fcc: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x255FCCu;
    {
        const bool branch_taken_0x255fcc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x255fcc) {
            ctx->pc = 0x256004u;
            return;
        }
    }
    ctx->pc = 0x255FD4u;
    // 0x255fd4: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x255fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x255fd8: 0x26050030  addiu       $a1, $s0, 0x30
    ctx->pc = 0x255fd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x255fdc: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x255fdcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x255fe0: 0x30447fff  andi        $a0, $v0, 0x7FFF
    ctx->pc = 0x255fe0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x255fe4: 0x24028000  addiu       $v0, $zero, -0x8000
    ctx->pc = 0x255fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x255fe8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x255fe8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x255fec: 0x641025  or          $v0, $v1, $a0
    ctx->pc = 0x255fecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x255ff0: 0xa4a20000  sh          $v0, 0x0($a1)
    ctx->pc = 0x255ff0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x255ff4: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x255ff4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x255ff8: 0x3051ffff  andi        $s1, $v0, 0xFFFF
    ctx->pc = 0x255ff8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x255ffc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x255FFCu;
    {
        const bool branch_taken_0x255ffc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x255ffc) {
            ctx->pc = 0x256030u;
            return;
        }
    }
    ctx->pc = 0x256004u;
}
