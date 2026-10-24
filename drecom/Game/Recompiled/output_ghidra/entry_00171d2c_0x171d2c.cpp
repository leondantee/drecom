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

// Function: entry_00171d2c
// Address: 0x171d2c - 0x171e70
void entry_00171d2c_0x171d2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00171d2c_0x171d2c");
#endif

    switch (ctx->pc) {
        case 0x171dd4u: goto label_171dd4;
        default: break;
    }

    ctx->pc = 0x171d2cu;

    // 0x171d2c: 0x141040  sll         $v0, $s4, 1
    ctx->pc = 0x171d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
    // 0x171d30: 0x548021  addu        $s0, $v0, $s4
    ctx->pc = 0x171d30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x171d34: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x171d34u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x171d38: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x171d38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x171d3c: 0x2443bd00  addiu       $v1, $v0, -0x4300
    ctx->pc = 0x171d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x171d40: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x171d40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x171d44: 0x24470060  addiu       $a3, $v0, 0x60
    ctx->pc = 0x171d44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x171d48: 0x78e30000  lq          $v1, 0x0($a3)
    ctx->pc = 0x171d48u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x171d4c: 0x26a20070  addiu       $v0, $s5, 0x70
    ctx->pc = 0x171d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 112));
    // 0x171d50: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x171d50u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x171d54: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x171d54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x171d58: 0x512021  addu        $a0, $v0, $s1
    ctx->pc = 0x171d58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x171d5c: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x171d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x171d60: 0x3c060048  lui         $a2, 0x48
    ctx->pc = 0x171d60u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)72 << 16));
    // 0x171d64: 0x24c4bd00  addiu       $a0, $a2, -0x4300
    ctx->pc = 0x171d64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 4294950144));
    // 0x171d68: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x171d68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x171d6c: 0x24450060  addiu       $a1, $v0, 0x60
    ctx->pc = 0x171d6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x171d70: 0x78a60000  lq          $a2, 0x0($a1)
    ctx->pc = 0x171d70u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x171d74: 0x26a20070  addiu       $v0, $s5, 0x70
    ctx->pc = 0x171d74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 112));
    // 0x171d78: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x171d78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x171d7c: 0x7c460000  sq          $a2, 0x0($v0)
    ctx->pc = 0x171d7cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 6));
    // 0x171d80: 0x123840  sll         $a3, $s2, 1
    ctx->pc = 0x171d80u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x171d84: 0xf21021  addu        $v0, $a3, $s2
    ctx->pc = 0x171d84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 18)));
    // 0x171d88: 0x23100  sll         $a2, $v0, 4
    ctx->pc = 0x171d88u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x171d8c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x171d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x171d90: 0x2443bd00  addiu       $v1, $v0, -0x4300
    ctx->pc = 0x171d90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x171d94: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x171d94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x171d98: 0x24630060  addiu       $v1, $v1, 0x60
    ctx->pc = 0x171d98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
    // 0x171d9c: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x171d9cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x171da0: 0x26a30070  addiu       $v1, $s5, 0x70
    ctx->pc = 0x171da0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 112));
    // 0x171da4: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x171da4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x171da8: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x171da8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x171dac: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x171dacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x171db0: 0x2462c930  addiu       $v0, $v1, -0x36D0
    ctx->pc = 0x171db0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953264));
    // 0x171db4: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x171db4u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x47C930u));
    // 0x171db8: 0x26a20070  addiu       $v0, $s5, 0x70
    ctx->pc = 0x171db8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 112));
    // 0x171dbc: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x171dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x171dc0: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x171dc0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x171dc4: 0x26a40070  addiu       $a0, $s5, 0x70
    ctx->pc = 0x171dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 112));
    // 0x171dc8: 0x26a50070  addiu       $a1, $s5, 0x70
    ctx->pc = 0x171dc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 112));
    // 0x171dcc: 0xc05da30  jal         func_1768C0
    ctx->pc = 0x171DCCu;
    SET_GPR_U32(ctx, 31, 0x171DD4u);
    ctx->pc = 0x1768C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1768C0u, 0x171DCCu, 0x171DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171DD4u;
label_171dd4:
    // 0x171dd4: 0x141840  sll         $v1, $s4, 1
    ctx->pc = 0x171dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
    // 0x171dd8: 0x74b821  addu        $s7, $v1, $s4
    ctx->pc = 0x171dd8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x171ddc: 0x178100  sll         $s0, $s7, 4
    ctx->pc = 0x171ddcu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 23), 4));
    // 0x171de0: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x171de0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x171de4: 0x2483bd00  addiu       $v1, $a0, -0x4300
    ctx->pc = 0x171de4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950144));
    // 0x171de8: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x171de8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x171dec: 0x24630080  addiu       $v1, $v1, 0x80
    ctx->pc = 0x171decu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x171df0: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x171df0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x171df4: 0x26a40030  addiu       $a0, $s5, 0x30
    ctx->pc = 0x171df4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 48));
    // 0x171df8: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x171df8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x171dfc: 0x111840  sll         $v1, $s1, 1
    ctx->pc = 0x171dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x171e00: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x171e00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x171e04: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x171e04u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x171e08: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x171e08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x171e0c: 0x2464bd00  addiu       $a0, $v1, -0x4300
    ctx->pc = 0x171e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
    // 0x171e10: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x171e10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x171e14: 0x24630080  addiu       $v1, $v1, 0x80
    ctx->pc = 0x171e14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x171e18: 0x78650000  lq          $a1, 0x0($v1)
    ctx->pc = 0x171e18u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x171e1c: 0x26a30030  addiu       $v1, $s5, 0x30
    ctx->pc = 0x171e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 48));
    // 0x171e20: 0x24640010  addiu       $a0, $v1, 0x10
    ctx->pc = 0x171e20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x171e24: 0x7c850000  sq          $a1, 0x0($a0)
    ctx->pc = 0x171e24u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 5));
    // 0x171e28: 0x121840  sll         $v1, $s2, 1
    ctx->pc = 0x171e28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x171e2c: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x171e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x171e30: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x171e30u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x171e34: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x171e34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x171e38: 0x2464bd00  addiu       $a0, $v1, -0x4300
    ctx->pc = 0x171e38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
    // 0x171e3c: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x171e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x171e40: 0x24630080  addiu       $v1, $v1, 0x80
    ctx->pc = 0x171e40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x171e44: 0x78650000  lq          $a1, 0x0($v1)
    ctx->pc = 0x171e44u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x171e48: 0x26a30030  addiu       $v1, $s5, 0x30
    ctx->pc = 0x171e48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 48));
    // 0x171e4c: 0x24640020  addiu       $a0, $v1, 0x20
    ctx->pc = 0x171e4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x171e50: 0x7c850000  sq          $a1, 0x0($a0)
    ctx->pc = 0x171e50u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 5));
    // 0x171e54: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x171e54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x171e58: 0x2463bd50  addiu       $v1, $v1, -0x42B0
    ctx->pc = 0x171e58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950224));
    // 0x171e5c: 0x78650000  lq          $a1, 0x0($v1)
    ctx->pc = 0x171e5cu;
    SET_GPR_VEC(ctx, 5, FAST_READ128(0x47BD50u));
    // 0x171e60: 0x26a40030  addiu       $a0, $s5, 0x30
    ctx->pc = 0x171e60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 48));
    // 0x171e64: 0x24830030  addiu       $v1, $a0, 0x30
    ctx->pc = 0x171e64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x171e68: 0x7c650000  sq          $a1, 0x0($v1)
    ctx->pc = 0x171e68u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 5));
    // 0x171e6c: 0x0  nop
    ctx->pc = 0x171e6cu;
    // NOP
    ctx->pc = 0x171e70u;
}
