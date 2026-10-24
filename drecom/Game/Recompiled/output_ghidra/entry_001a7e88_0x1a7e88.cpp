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

// Function: entry_001a7e88
// Address: 0x1a7e88 - 0x1a81d0
void entry_001a7e88_0x1a7e88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a7e88_0x1a7e88");
#endif

    switch (ctx->pc) {
        case 0x1a8038u: goto label_1a8038;
        case 0x1a8160u: goto label_1a8160;
        case 0x1a8194u: goto label_1a8194;
        default: break;
    }

    ctx->pc = 0x1a7e88u;

    // 0x1a7e88: 0x2a210004  slti        $at, $s1, 0x4
    ctx->pc = 0x1a7e88u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1a7e8c: 0x1420fd66  bnez        $at, . + 4 + (-0x29A << 2)
    ctx->pc = 0x1A7E8Cu;
    {
        const bool branch_taken_0x1a7e8c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a7e8c) {
            ctx->pc = 0x1A7428u;
            return;
        }
    }
    ctx->pc = 0x1A7E94u;
    // 0x1a7e94: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1a7e94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x1a7e98: 0xae4305b4  sw          $v1, 0x5B4($s2)
    ctx->pc = 0x1a7e98u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1460), GPR_U32(ctx, 3));
    // 0x1a7e9c: 0x3c044800  lui         $a0, 0x4800
    ctx->pc = 0x1a7e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)18432 << 16));
    // 0x1a7ea0: 0x34852a02  ori         $a1, $a0, 0x2A02
    ctx->pc = 0x1a7ea0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)10754);
    // 0x1a7ea4: 0xae4505b8  sw          $a1, 0x5B8($s2)
    ctx->pc = 0x1a7ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1464), GPR_U32(ctx, 5));
    // 0x1a7ea8: 0x3c03ff80  lui         $v1, 0xFF80
    ctx->pc = 0x1a7ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65408 << 16));
    // 0x1a7eac: 0x34638080  ori         $v1, $v1, 0x8080
    ctx->pc = 0x1a7eacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32896);
    // 0x1a7eb0: 0x264405bc  addiu       $a0, $s2, 0x5BC
    ctx->pc = 0x1a7eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1468));
    // 0x1a7eb4: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1a7eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x1a7eb8: 0x8e030090  lw          $v1, 0x90($s0)
    ctx->pc = 0x1a7eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x1a7ebc: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1a7ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1a7ec0: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1a7ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a7ec4: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1a7ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1a7ec8: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1a7ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a7ecc: 0x240200c6  addiu       $v0, $zero, 0xC6
    ctx->pc = 0x1a7eccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 198));
    // 0x1a7ed0: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x1a7ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a7ed4: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1a7ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1a7ed8: 0x24447900  addiu       $a0, $v0, 0x7900
    ctx->pc = 0x1a7ed8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
    // 0x1a7edc: 0x41400  sll         $v0, $a0, 16
    ctx->pc = 0x1a7edcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x1a7ee0: 0x34438c10  ori         $v1, $v0, 0x8C10
    ctx->pc = 0x1a7ee0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35856);
    // 0x1a7ee4: 0x264205c0  addiu       $v0, $s2, 0x5C0
    ctx->pc = 0x1a7ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1472));
    // 0x1a7ee8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1a7ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1a7eec: 0x3402fff8  ori         $v0, $zero, 0xFFF8
    ctx->pc = 0x1a7eecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65528);
    // 0x1a7ef0: 0x264605c4  addiu       $a2, $s2, 0x5C4
    ctx->pc = 0x1a7ef0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 1476));
    // 0x1a7ef4: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x1a7ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x1a7ef8: 0x8e04008c  lw          $a0, 0x8C($s0)
    ctx->pc = 0x1a7ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x1a7efc: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1a7efcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1a7f00: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x1a7f00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a7f04: 0x244201c2  addiu       $v0, $v0, 0x1C2
    ctx->pc = 0x1a7f04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 450));
    // 0x1a7f08: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1a7f08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1a7f0c: 0x24627000  addiu       $v0, $v1, 0x7000
    ctx->pc = 0x1a7f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 28672));
    // 0x1a7f10: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x1a7f10u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1a7f14: 0x8e030090  lw          $v1, 0x90($s0)
    ctx->pc = 0x1a7f14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x1a7f18: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1a7f18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1a7f1c: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1a7f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a7f20: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1a7f20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1a7f24: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a7f24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a7f28: 0x240400c6  addiu       $a0, $zero, 0xC6
    ctx->pc = 0x1a7f28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 198));
    // 0x1a7f2c: 0x821823  subu        $v1, $a0, $v0
    ctx->pc = 0x1a7f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1a7f30: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1a7f30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1a7f34: 0x24437900  addiu       $v1, $v0, 0x7900
    ctx->pc = 0x1a7f34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
    // 0x1a7f38: 0x31400  sll         $v0, $v1, 16
    ctx->pc = 0x1a7f38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x1a7f3c: 0xa23025  or          $a2, $a1, $v0
    ctx->pc = 0x1a7f3cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x1a7f40: 0x264205c8  addiu       $v0, $s2, 0x5C8
    ctx->pc = 0x1a7f40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1480));
    // 0x1a7f44: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x1a7f44u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x1a7f48: 0x3405fff8  ori         $a1, $zero, 0xFFF8
    ctx->pc = 0x1a7f48u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65528);
    // 0x1a7f4c: 0x264405cc  addiu       $a0, $s2, 0x5CC
    ctx->pc = 0x1a7f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1484));
    // 0x1a7f50: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x1a7f50u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x1a7f54: 0x8e03008c  lw          $v1, 0x8C($s0)
    ctx->pc = 0x1a7f54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x1a7f58: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1a7f58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1a7f5c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a7f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a7f60: 0x244301c2  addiu       $v1, $v0, 0x1C2
    ctx->pc = 0x1a7f60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 450));
    // 0x1a7f64: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x1a7f64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1a7f68: 0x24427000  addiu       $v0, $v0, 0x7000
    ctx->pc = 0x1a7f68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28672));
    // 0x1a7f6c: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x1a7f6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1a7f70: 0x8e020090  lw          $v0, 0x90($s0)
    ctx->pc = 0x1a7f70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x1a7f74: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1a7f74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a7f78: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1a7f78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1a7f7c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a7f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a7f80: 0x244600c8  addiu       $a2, $v0, 0xC8
    ctx->pc = 0x1a7f80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 200));
    // 0x1a7f84: 0x610c0  sll         $v0, $a2, 3
    ctx->pc = 0x1a7f84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x1a7f88: 0x24437900  addiu       $v1, $v0, 0x7900
    ctx->pc = 0x1a7f88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
    // 0x1a7f8c: 0x31400  sll         $v0, $v1, 16
    ctx->pc = 0x1a7f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x1a7f90: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x1a7f90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1a7f94: 0x264505d0  addiu       $a1, $s2, 0x5D0
    ctx->pc = 0x1a7f94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 1488));
    // 0x1a7f98: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x1a7f98u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x1a7f9c: 0x3403fff8  ori         $v1, $zero, 0xFFF8
    ctx->pc = 0x1a7f9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65528);
    // 0x1a7fa0: 0x264205d4  addiu       $v0, $s2, 0x5D4
    ctx->pc = 0x1a7fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1492));
    // 0x1a7fa4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1a7fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1a7fa8: 0x8e040090  lw          $a0, 0x90($s0)
    ctx->pc = 0x1a7fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x1a7fac: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1a7facu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1a7fb0: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1a7fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1a7fb4: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1a7fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a7fb8: 0x246200c8  addiu       $v0, $v1, 0xC8
    ctx->pc = 0x1a7fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 200));
    // 0x1a7fbc: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x1a7fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1a7fc0: 0x24627900  addiu       $v0, $v1, 0x7900
    ctx->pc = 0x1a7fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 30976));
    // 0x1a7fc4: 0x24400  sll         $t0, $v0, 16
    ctx->pc = 0x1a7fc4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1a7fc8: 0x35038c10  ori         $v1, $t0, 0x8C10
    ctx->pc = 0x1a7fc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)35856);
    // 0x1a7fcc: 0x264205d8  addiu       $v0, $s2, 0x5D8
    ctx->pc = 0x1a7fccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1496));
    // 0x1a7fd0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1a7fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1a7fd4: 0x3403fff8  ori         $v1, $zero, 0xFFF8
    ctx->pc = 0x1a7fd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65528);
    // 0x1a7fd8: 0x264205dc  addiu       $v0, $s2, 0x5DC
    ctx->pc = 0x1a7fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1500));
    // 0x1a7fdc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1a7fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1a7fe0: 0x8e070090  lw          $a3, 0x90($s0)
    ctx->pc = 0x1a7fe0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x1a7fe4: 0x72040  sll         $a0, $a3, 1
    ctx->pc = 0x1a7fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x1a7fe8: 0x873021  addu        $a2, $a0, $a3
    ctx->pc = 0x1a7fe8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x1a7fec: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x1a7fecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x1a7ff0: 0x461821  addu        $v1, $v0, $a2
    ctx->pc = 0x1a7ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1a7ff4: 0x240200c6  addiu       $v0, $zero, 0xC6
    ctx->pc = 0x1a7ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 198));
    // 0x1a7ff8: 0x432823  subu        $a1, $v0, $v1
    ctx->pc = 0x1a7ff8u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a7ffc: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x1a7ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1a8000: 0x24647900  addiu       $a0, $v1, 0x7900
    ctx->pc = 0x1a8000u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 30976));
    // 0x1a8004: 0x41400  sll         $v0, $a0, 16
    ctx->pc = 0x1a8004u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x1a8008: 0x34438c10  ori         $v1, $v0, 0x8C10
    ctx->pc = 0x1a8008u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35856);
    // 0x1a800c: 0x264205e0  addiu       $v0, $s2, 0x5E0
    ctx->pc = 0x1a800cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1504));
    // 0x1a8010: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1a8010u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1a8014: 0x3405fff8  ori         $a1, $zero, 0xFFF8
    ctx->pc = 0x1a8014u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65528);
    // 0x1a8018: 0x264305e4  addiu       $v1, $s2, 0x5E4
    ctx->pc = 0x1a8018u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1508));
    // 0x1a801c: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x1a801cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x1a8020: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1a8020u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1a8024: 0x24441614  addiu       $a0, $v0, 0x1614
    ctx->pc = 0x1a8024u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 5652));
    // 0x1a8028: 0x265305b4  addiu       $s3, $s2, 0x5B4
    ctx->pc = 0x1a8028u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 1460));
    // 0x1a802c: 0x72602e28  paddub      $a1, $s3, $zero
    ctx->pc = 0x1a802cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x1a8030: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x1A8030u;
    SET_GPR_U32(ctx, 31, 0x1A8038u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x1A8030u, 0x1A8038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8038u;
label_1a8038:
    // 0x1a8038: 0x3c068000  lui         $a2, 0x8000
    ctx->pc = 0x1a8038u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32768 << 16));
    // 0x1a803c: 0xae460580  sw          $a2, 0x580($s2)
    ctx->pc = 0x1a803cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1408), GPR_U32(ctx, 6));
    // 0x1a8040: 0x3c054800  lui         $a1, 0x4800
    ctx->pc = 0x1a8040u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)18432 << 16));
    // 0x1a8044: 0x34a32a02  ori         $v1, $a1, 0x2A02
    ctx->pc = 0x1a8044u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)10754);
    // 0x1a8048: 0xae430584  sw          $v1, 0x584($s2)
    ctx->pc = 0x1a8048u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1412), GPR_U32(ctx, 3));
    // 0x1a804c: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x1a804cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1a8050: 0x26430588  addiu       $v1, $s2, 0x588
    ctx->pc = 0x1a8050u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1416));
    // 0x1a8054: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1a8054u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x1a8058: 0x3c037f30  lui         $v1, 0x7F30
    ctx->pc = 0x1a8058u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32560 << 16));
    // 0x1a805c: 0x34738c10  ori         $s3, $v1, 0x8C10
    ctx->pc = 0x1a805cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)35856);
    // 0x1a8060: 0x2642058c  addiu       $v0, $s2, 0x58C
    ctx->pc = 0x1a8060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1420));
    // 0x1a8064: 0xac530000  sw          $s3, 0x0($v0)
    ctx->pc = 0x1a8064u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 19));
    // 0x1a8068: 0x3403fff9  ori         $v1, $zero, 0xFFF9
    ctx->pc = 0x1a8068u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65529);
    // 0x1a806c: 0x26420590  addiu       $v0, $s2, 0x590
    ctx->pc = 0x1a806cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1424));
    // 0x1a8070: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1a8070u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1a8074: 0x8e02008c  lw          $v0, 0x8C($s0)
    ctx->pc = 0x1a8074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x1a8078: 0x22840  sll         $a1, $v0, 1
    ctx->pc = 0x1a8078u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1a807c: 0xa22021  addu        $a0, $a1, $v0
    ctx->pc = 0x1a807cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1a8080: 0x248301c2  addiu       $v1, $a0, 0x1C2
    ctx->pc = 0x1a8080u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 450));
    // 0x1a8084: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x1a8084u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1a8088: 0x24427000  addiu       $v0, $v0, 0x7000
    ctx->pc = 0x1a8088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28672));
    // 0x1a808c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1a808cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1a8090: 0x3c057f30  lui         $a1, 0x7F30
    ctx->pc = 0x1a8090u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32560 << 16));
    // 0x1a8094: 0x451825  or          $v1, $v0, $a1
    ctx->pc = 0x1a8094u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x1a8098: 0x26420594  addiu       $v0, $s2, 0x594
    ctx->pc = 0x1a8098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1428));
    // 0x1a809c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1a809cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1a80a0: 0x3404fff9  ori         $a0, $zero, 0xFFF9
    ctx->pc = 0x1a80a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65529);
    // 0x1a80a4: 0x26420598  addiu       $v0, $s2, 0x598
    ctx->pc = 0x1a80a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1432));
    // 0x1a80a8: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x1a80a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x1a80ac: 0x8e03008c  lw          $v1, 0x8C($s0)
    ctx->pc = 0x1a80acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x1a80b0: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1a80b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1a80b4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a80b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a80b8: 0x245401c2  addiu       $s4, $v0, 0x1C2
    ctx->pc = 0x1a80b8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 450));
    // 0x1a80bc: 0x14a100  sll         $s4, $s4, 4
    ctx->pc = 0x1a80bcu;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x1a80c0: 0x26887000  addiu       $t0, $s4, 0x7000
    ctx->pc = 0x1a80c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 20), 28672));
    // 0x1a80c4: 0x3106ffff  andi        $a2, $t0, 0xFFFF
    ctx->pc = 0x1a80c4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
    // 0x1a80c8: 0x8e030090  lw          $v1, 0x90($s0)
    ctx->pc = 0x1a80c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x1a80cc: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1a80ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1a80d0: 0x433821  addu        $a3, $v0, $v1
    ctx->pc = 0x1a80d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a80d4: 0x24e500c8  addiu       $a1, $a3, 0xC8
    ctx->pc = 0x1a80d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 200));
    // 0x1a80d8: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x1a80d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1a80dc: 0x24827900  addiu       $v0, $a0, 0x7900
    ctx->pc = 0x1a80dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 30976));
    // 0x1a80e0: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x1a80e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1a80e4: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x1a80e4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x1a80e8: 0x2642059c  addiu       $v0, $s2, 0x59C
    ctx->pc = 0x1a80e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1436));
    // 0x1a80ec: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x1a80ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x1a80f0: 0x3403fff9  ori         $v1, $zero, 0xFFF9
    ctx->pc = 0x1a80f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65529);
    // 0x1a80f4: 0x264505a0  addiu       $a1, $s2, 0x5A0
    ctx->pc = 0x1a80f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 1440));
    // 0x1a80f8: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x1a80f8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x1a80fc: 0x8e150090  lw          $s5, 0x90($s0)
    ctx->pc = 0x1a80fcu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x1a8100: 0x151040  sll         $v0, $s5, 1
    ctx->pc = 0x1a8100u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 1));
    // 0x1a8104: 0x552021  addu        $a0, $v0, $s5
    ctx->pc = 0x1a8104u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x1a8108: 0x248300c8  addiu       $v1, $a0, 0xC8
    ctx->pc = 0x1a8108u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 200));
    // 0x1a810c: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1a810cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1a8110: 0x24427900  addiu       $v0, $v0, 0x7900
    ctx->pc = 0x1a8110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
    // 0x1a8114: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1a8114u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1a8118: 0x34488c10  ori         $t0, $v0, 0x8C10
    ctx->pc = 0x1a8118u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35856);
    // 0x1a811c: 0x264605a4  addiu       $a2, $s2, 0x5A4
    ctx->pc = 0x1a811cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 1444));
    // 0x1a8120: 0xacc80000  sw          $t0, 0x0($a2)
    ctx->pc = 0x1a8120u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 8));
    // 0x1a8124: 0x3402fff9  ori         $v0, $zero, 0xFFF9
    ctx->pc = 0x1a8124u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65529);
    // 0x1a8128: 0x264505a8  addiu       $a1, $s2, 0x5A8
    ctx->pc = 0x1a8128u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 1448));
    // 0x1a812c: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x1a812cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x1a8130: 0x3c047f30  lui         $a0, 0x7F30
    ctx->pc = 0x1a8130u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32560 << 16));
    // 0x1a8134: 0x34838c10  ori         $v1, $a0, 0x8C10
    ctx->pc = 0x1a8134u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)35856);
    // 0x1a8138: 0x264205ac  addiu       $v0, $s2, 0x5AC
    ctx->pc = 0x1a8138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1452));
    // 0x1a813c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1a813cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1a8140: 0x3403fff9  ori         $v1, $zero, 0xFFF9
    ctx->pc = 0x1a8140u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65529);
    // 0x1a8144: 0x264205b0  addiu       $v0, $s2, 0x5B0
    ctx->pc = 0x1a8144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1456));
    // 0x1a8148: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1a8148u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1a814c: 0x3c07005d  lui         $a3, 0x5D
    ctx->pc = 0x1a814cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)93 << 16));
    // 0x1a8150: 0x24e41614  addiu       $a0, $a3, 0x1614
    ctx->pc = 0x1a8150u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 5652));
    // 0x1a8154: 0x26450580  addiu       $a1, $s2, 0x580
    ctx->pc = 0x1a8154u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 1408));
    // 0x1a8158: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x1A8158u;
    SET_GPR_U32(ctx, 31, 0x1A8160u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x1A8158u, 0x1A8160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8160u;
label_1a8160:
    // 0x1a8160: 0x3c020007  lui         $v0, 0x7
    ctx->pc = 0x1a8160u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7 << 16));
    // 0x1a8164: 0x34430808  ori         $v1, $v0, 0x808
    ctx->pc = 0x1a8164u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2056);
    // 0x1a8168: 0x3303c  dsll32      $a2, $v1, 0
    ctx->pc = 0x1a8168u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1a816c: 0x3c021c08  lui         $v0, 0x1C08
    ctx->pc = 0x1a816cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7176 << 16));
    // 0x1a8170: 0x34451a01  ori         $a1, $v0, 0x1A01
    ctx->pc = 0x1a8170u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6657);
    // 0x1a8174: 0xa62025  or          $a0, $a1, $a2
    ctx->pc = 0x1a8174u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x1a8178: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x1a8178u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x1a817c: 0x2465f128  addiu       $a1, $v1, -0xED8
    ctx->pc = 0x1a817cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963496));
    // 0x1a8180: 0xde020028  ld          $v0, 0x28($s0)
    ctx->pc = 0x1a8180u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x1a8184: 0x21378  dsll        $v0, $v0, 13
    ctx->pc = 0x1a8184u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 13);
    // 0x1a8188: 0x234be  dsrl32      $a2, $v0, 18
    ctx->pc = 0x1a8188u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) >> (32 + 18));
    // 0x1a818c: 0xc059b14  jal         func_166C50
    ctx->pc = 0x1A818Cu;
    SET_GPR_U32(ctx, 31, 0x1A8194u);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x1A818Cu, 0x1A8194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8194u;
label_1a8194:
    // 0x1a8194: 0x92030317  lbu         $v1, 0x317($s0)
    ctx->pc = 0x1a8194u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 791)));
    // 0x1a8198: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x1A8198u;
    {
        const bool branch_taken_0x1a8198 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a8198) {
            ctx->pc = 0x1A81D0u;
            return;
        }
    }
    ctx->pc = 0x1A81A0u;
    // 0x1a81a0: 0x9205002f  lbu         $a1, 0x2F($s0)
    ctx->pc = 0x1a81a0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 47)));
    // 0x1a81a4: 0x30a6001f  andi        $a2, $a1, 0x1F
    ctx->pc = 0x1a81a4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)31);
    // 0x1a81a8: 0x3c020007  lui         $v0, 0x7
    ctx->pc = 0x1a81a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7 << 16));
    // 0x1a81ac: 0x34430808  ori         $v1, $v0, 0x808
    ctx->pc = 0x1a81acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2056);
    // 0x1a81b0: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1a81b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1a81b4: 0x3c021c08  lui         $v0, 0x1C08
    ctx->pc = 0x1a81b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7176 << 16));
    // 0x1a81b8: 0x34432601  ori         $v1, $v0, 0x2601
    ctx->pc = 0x1a81b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9729);
    // 0x1a81bc: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1a81bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1a81c0: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x1a81c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x1a81c4: 0x2445f138  addiu       $a1, $v0, -0xEC8
    ctx->pc = 0x1a81c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963512));
    // 0x1a81c8: 0xc059b14  jal         func_166C50
    ctx->pc = 0x1A81C8u;
    SET_GPR_U32(ctx, 31, 0x1A81D0u);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x1A81C8u, 0x1A81D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A81D0u;
}
