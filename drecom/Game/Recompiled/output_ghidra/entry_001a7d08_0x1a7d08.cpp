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

// Function: entry_001a7d08
// Address: 0x1a7d08 - 0x1a7e88
void entry_001a7d08_0x1a7d08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a7d08_0x1a7d08");
#endif

    switch (ctx->pc) {
        case 0x1a7e7cu: goto label_1a7e7c;
        default: break;
    }

    ctx->pc = 0x1a7d08u;

    // 0x1a7d08: 0x8e060090  lw          $a2, 0x90($s0)
    ctx->pc = 0x1a7d08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x1a7d0c: 0x2261018  mult        $v0, $s1, $a2
    ctx->pc = 0x1a7d0cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1a7d10: 0x22840  sll         $a1, $v0, 1
    ctx->pc = 0x1a7d10u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1a7d14: 0xa21821  addu        $v1, $a1, $v0
    ctx->pc = 0x1a7d14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1a7d18: 0x246400c8  addiu       $a0, $v1, 0xC8
    ctx->pc = 0x1a7d18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 200));
    // 0x1a7d1c: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x1a7d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1a7d20: 0x24437900  addiu       $v1, $v0, 0x7900
    ctx->pc = 0x1a7d20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
    // 0x1a7d24: 0x31400  sll         $v0, $v1, 16
    ctx->pc = 0x1a7d24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x1a7d28: 0x34478c20  ori         $a3, $v0, 0x8C20
    ctx->pc = 0x1a7d28u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35872);
    // 0x1a7d2c: 0x26240003  addiu       $a0, $s1, 0x3
    ctx->pc = 0x1a7d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 3));
    // 0x1a7d30: 0x42880  sll         $a1, $a0, 2
    ctx->pc = 0x1a7d30u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1a7d34: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x1a7d34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1a7d38: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x1a7d38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1a7d3c: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x1a7d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a7d40: 0x23080  sll         $a2, $v0, 2
    ctx->pc = 0x1a7d40u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a7d44: 0x2462821  addu        $a1, $s2, $a2
    ctx->pc = 0x1a7d44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 6)));
    // 0x1a7d48: 0x24a20358  addiu       $v0, $a1, 0x358
    ctx->pc = 0x1a7d48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 856));
    // 0x1a7d4c: 0xac470000  sw          $a3, 0x0($v0)
    ctx->pc = 0x1a7d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 7));
    // 0x1a7d50: 0x3404fff8  ori         $a0, $zero, 0xFFF8
    ctx->pc = 0x1a7d50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65528);
    // 0x1a7d54: 0x26230003  addiu       $v1, $s1, 0x3
    ctx->pc = 0x1a7d54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 3));
    // 0x1a7d58: 0x32880  sll         $a1, $v1, 2
    ctx->pc = 0x1a7d58u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a7d5c: 0xa31021  addu        $v0, $a1, $v1
    ctx->pc = 0x1a7d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1a7d60: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1a7d60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1a7d64: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x1a7d64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a7d68: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x1a7d68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1a7d6c: 0x2421821  addu        $v1, $s2, $v0
    ctx->pc = 0x1a7d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1a7d70: 0x2465035c  addiu       $a1, $v1, 0x35C
    ctx->pc = 0x1a7d70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 860));
    // 0x1a7d74: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x1a7d74u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x1a7d78: 0x8e060090  lw          $a2, 0x90($s0)
    ctx->pc = 0x1a7d78u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x1a7d7c: 0x2261818  mult        $v1, $s1, $a2
    ctx->pc = 0x1a7d7cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1a7d80: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1a7d80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1a7d84: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1a7d84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a7d88: 0x248300c8  addiu       $v1, $a0, 0xC8
    ctx->pc = 0x1a7d88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 200));
    // 0x1a7d8c: 0x8e020090  lw          $v0, 0x90($s0)
    ctx->pc = 0x1a7d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x1a7d90: 0x22040  sll         $a0, $v0, 1
    ctx->pc = 0x1a7d90u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1a7d94: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1a7d94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1a7d98: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x1a7d98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a7d9c: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x1a7d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1a7da0: 0x24487900  addiu       $t0, $v0, 0x7900
    ctx->pc = 0x1a7da0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
    // 0x1a7da4: 0x82400  sll         $a0, $t0, 16
    ctx->pc = 0x1a7da4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 16));
    // 0x1a7da8: 0x8e03008c  lw          $v1, 0x8C($s0)
    ctx->pc = 0x1a7da8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x1a7dac: 0x33840  sll         $a3, $v1, 1
    ctx->pc = 0x1a7dacu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1a7db0: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x1a7db0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x1a7db4: 0x246201c2  addiu       $v0, $v1, 0x1C2
    ctx->pc = 0x1a7db4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 450));
    // 0x1a7db8: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1a7db8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1a7dbc: 0x24627000  addiu       $v0, $v1, 0x7000
    ctx->pc = 0x1a7dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 28672));
    // 0x1a7dc0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1a7dc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1a7dc4: 0x443025  or          $a2, $v0, $a0
    ctx->pc = 0x1a7dc4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1a7dc8: 0x26250003  addiu       $a1, $s1, 0x3
    ctx->pc = 0x1a7dc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 3));
    // 0x1a7dcc: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x1a7dccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1a7dd0: 0x452021  addu        $a0, $v0, $a1
    ctx->pc = 0x1a7dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1a7dd4: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1a7dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1a7dd8: 0x651021  addu        $v0, $v1, $a1
    ctx->pc = 0x1a7dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1a7ddc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a7ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a7de0: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1a7de0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1a7de4: 0x24470364  addiu       $a3, $v0, 0x364
    ctx->pc = 0x1a7de4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 868));
    // 0x1a7de8: 0xace60000  sw          $a2, 0x0($a3)
    ctx->pc = 0x1a7de8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 6));
    // 0x1a7dec: 0x3406fff8  ori         $a2, $zero, 0xFFF8
    ctx->pc = 0x1a7decu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65528);
    // 0x1a7df0: 0x26250003  addiu       $a1, $s1, 0x3
    ctx->pc = 0x1a7df0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 3));
    // 0x1a7df4: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1a7df4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1a7df8: 0x652021  addu        $a0, $v1, $a1
    ctx->pc = 0x1a7df8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1a7dfc: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x1a7dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1a7e00: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1a7e00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1a7e04: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1a7e04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a7e08: 0x2431021  addu        $v0, $s2, $v1
    ctx->pc = 0x1a7e08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x1a7e0c: 0x24470368  addiu       $a3, $v0, 0x368
    ctx->pc = 0x1a7e0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 872));
    // 0x1a7e10: 0xace60000  sw          $a2, 0x0($a3)
    ctx->pc = 0x1a7e10u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 6));
    // 0x1a7e14: 0x26220003  addiu       $v0, $s1, 0x3
    ctx->pc = 0x1a7e14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 3));
    // 0x1a7e18: 0x22880  sll         $a1, $v0, 2
    ctx->pc = 0x1a7e18u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a7e1c: 0xa21821  addu        $v1, $a1, $v0
    ctx->pc = 0x1a7e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1a7e20: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1a7e20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1a7e24: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1a7e24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1a7e28: 0x24460098  addiu       $a2, $v0, 0x98
    ctx->pc = 0x1a7e28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 152));
    // 0x1a7e2c: 0x26240003  addiu       $a0, $s1, 0x3
    ctx->pc = 0x1a7e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 3));
    // 0x1a7e30: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x1a7e30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1a7e34: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x1a7e34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1a7e38: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1a7e38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1a7e3c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1a7e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1a7e40: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a7e40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a7e44: 0x2422821  addu        $a1, $s2, $v0
    ctx->pc = 0x1a7e44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1a7e48: 0xaca60348  sw          $a2, 0x348($a1)
    ctx->pc = 0x1a7e48u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 840), GPR_U32(ctx, 6));
    // 0x1a7e4c: 0x26240003  addiu       $a0, $s1, 0x3
    ctx->pc = 0x1a7e4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 3));
    // 0x1a7e50: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1a7e50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1a7e54: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x1a7e54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a7e58: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1a7e58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1a7e5c: 0x443021  addu        $a2, $v0, $a0
    ctx->pc = 0x1a7e5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1a7e60: 0x63880  sll         $a3, $a2, 2
    ctx->pc = 0x1a7e60u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1a7e64: 0x2471821  addu        $v1, $s2, $a3
    ctx->pc = 0x1a7e64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 7)));
    // 0x1a7e68: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1a7e68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1a7e6c: 0x24441614  addiu       $a0, $v0, 0x1614
    ctx->pc = 0x1a7e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 5652));
    // 0x1a7e70: 0x24650340  addiu       $a1, $v1, 0x340
    ctx->pc = 0x1a7e70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 832));
    // 0x1a7e74: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x1A7E74u;
    SET_GPR_U32(ctx, 31, 0x1A7E7Cu);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x1A7E74u, 0x1A7E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7E7Cu;
label_1a7e7c:
    // 0x1a7e7c: 0x26260001  addiu       $a2, $s1, 0x1
    ctx->pc = 0x1a7e7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1a7e80: 0x70c08e28  paddub      $s1, $a2, $zero
    ctx->pc = 0x1a7e80u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x1a7e84: 0x0  nop
    ctx->pc = 0x1a7e84u;
    // NOP
    ctx->pc = 0x1a7e88u;
}
