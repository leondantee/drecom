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

// Function: entry_00101cd0
// Address: 0x101cd0 - 0x101db4
void entry_00101cd0_0x101cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00101cd0_0x101cd0");
#endif

    switch (ctx->pc) {
        case 0x101d78u: goto label_101d78;
        default: break;
    }

    ctx->pc = 0x101cd0u;

    // 0x101cd0: 0x700014a9  por         $v0, $zero, $zero
    ctx->pc = 0x101cd0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x101cd4: 0x24070016  addiu       $a3, $zero, 0x16
    ctx->pc = 0x101cd4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x101cd8: 0x7e420050  sq          $v0, 0x50($s2)
    ctx->pc = 0x101cd8u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 80), GPR_VEC(ctx, 2));
    // 0x101cdc: 0x24068000  addiu       $a2, $zero, -0x8000
    ctx->pc = 0x101cdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x101ce0: 0x7e4201c0  sq          $v0, 0x1C0($s2)
    ctx->pc = 0x101ce0u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 448), GPR_VEC(ctx, 2));
    // 0x101ce4: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x101ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x101ce8: 0xde440050  ld          $a0, 0x50($s2)
    ctx->pc = 0x101ce8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x101cec: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x101cecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x101cf0: 0xde4501c0  ld          $a1, 0x1C0($s2)
    ctx->pc = 0x101cf0u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 18), 448)));
    // 0x101cf4: 0xf7100b  movn        $v0, $a3, $s7
    ctx->pc = 0x101cf4u;
    if (GPR_U64(ctx, 23) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 7));
    // 0x101cf8: 0x862024  and         $a0, $a0, $a2
    ctx->pc = 0x101cf8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 6));
    // 0x101cfc: 0xf7180b  movn        $v1, $a3, $s7
    ctx->pc = 0x101cfcu;
    if (GPR_U64(ctx, 23) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 7));
    // 0x101d00: 0xa62824  and         $a1, $a1, $a2
    ctx->pc = 0x101d00u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 6));
    // 0x101d04: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x101d04u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x101d08: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x101d08u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x101d0c: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x101d0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x101d10: 0xde460058  ld          $a2, 0x58($s2)
    ctx->pc = 0x101d10u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 18), 88)));
    // 0x101d14: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x101d14u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x101d18: 0xde4701c8  ld          $a3, 0x1C8($s2)
    ctx->pc = 0x101d18u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 18), 456)));
    // 0x101d1c: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x101d1cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x101d20: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x101d20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x101d24: 0x3193a  dsrl        $v1, $v1, 4
    ctx->pc = 0x101d24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 4);
    // 0x101d28: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x101d28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x101d2c: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x101d2cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x101d30: 0xe23824  and         $a3, $a3, $v0
    ctx->pc = 0x101d30u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x101d34: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x101d34u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x101d38: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x101d38u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x101d3c: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x101d3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x101d40: 0x31b7c  dsll32      $v1, $v1, 13
    ctx->pc = 0x101d40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 13));
    // 0x101d44: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x101d44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x101d48: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x101d48u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x101d4c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x101d4cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x101d50: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x101d50u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x101d54: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x101d54u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x101d58: 0xfe440050  sd          $a0, 0x50($s2)
    ctx->pc = 0x101d58u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 80), GPR_U64(ctx, 4));
    // 0x101d5c: 0xfe460058  sd          $a2, 0x58($s2)
    ctx->pc = 0x101d5cu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 88), GPR_U64(ctx, 6));
    // 0x101d60: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x101d60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101d64: 0xfe4501c0  sd          $a1, 0x1C0($s2)
    ctx->pc = 0x101d64u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 448), GPR_U64(ctx, 5));
    // 0x101d68: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x101d68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101d6c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x101d6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101d70: 0xc040156  jal         func_100558
    ctx->pc = 0x101D70u;
    SET_GPR_U32(ctx, 31, 0x101D78u);
    ctx->pc = 0x101D74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101D70u;
    // 0x101d74: 0xfe4701c8  sd          $a3, 0x1C8($s2) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 18), 456), GPR_U64(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100558u;
    {
        ctx->pc = 0x101D78u;
        ps2_stubs::sceGszbufaddr(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x101D78u) { return; }
    ctx->pc = 0x101D78u;
label_101d78:
    // 0x101d78: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x101d78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x101d7c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x101d7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101d80: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x101d80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x101d84: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x101d84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x101d88: 0x34840001  ori         $a0, $a0, 0x1
    ctx->pc = 0x101d88u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1);
    // 0x101d8c: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x101d8cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x101d90: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x101d90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x101d94: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x101d94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x101d98: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x101d98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x101d9c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x101d9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x101da0: 0x10440004  beq         $v0, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x101DA0u;
    {
        const bool branch_taken_0x101da0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x101DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101DA0u;
        // 0x101da4: 0x8fa30020  lw          $v1, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101da0) {
            ctx->pc = 0x101DB4u;
            return;
        }
    }
    ctx->pc = 0x101DA8u;
    // 0x101da8: 0x84620000  lh          $v0, 0x0($v1)
    ctx->pc = 0x101da8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x101dac: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x101DACu;
    {
        const bool branch_taken_0x101dac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x101DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101DACu;
        // 0x101db0: 0xdfbf00c0  ld          $ra, 0xC0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101dac) {
            ctx->pc = 0x101E00u;
            return;
        }
    }
    ctx->pc = 0x101DB4u;
}
