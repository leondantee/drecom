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

// Function: entry_00100d8c
// Address: 0x100d8c - 0x100e98
void entry_00100d8c_0x100d8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00100d8c_0x100d8c");
#endif

    ctx->pc = 0x100d8cu;

    // 0x100d8c: 0x700014a9  por         $v0, $zero, $zero
    ctx->pc = 0x100d8cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x100d90: 0x30c37fff  andi        $v1, $a2, 0x7FFF
    ctx->pc = 0x100d90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)32767);
    // 0x100d94: 0x7dc20050  sq          $v0, 0x50($t6)
    ctx->pc = 0x100d94u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 80), GPR_VEC(ctx, 2));
    // 0x100d98: 0x7343c  dsll32      $a2, $a3, 16
    ctx->pc = 0x100d98u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) << (32 + 16));
    // 0x100d9c: 0x7dc20000  sq          $v0, 0x0($t6)
    ctx->pc = 0x100d9cu;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 2));
    // 0x100da0: 0x3c07f3ff  lui         $a3, 0xF3FF
    ctx->pc = 0x100da0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)62463 << 16));
    // 0x100da4: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x100da4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x100da8: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x100da8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x100dac: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x100dacu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x100db0: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x100db0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x100db4: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x100db4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x100db8: 0xddc40050  ld          $a0, 0x50($t6)
    ctx->pc = 0x100db8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 14), 80)));
    // 0x100dbc: 0x24028000  addiu       $v0, $zero, -0x8000
    ctx->pc = 0x100dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x100dc0: 0xddc50000  ld          $a1, 0x0($t6)
    ctx->pc = 0x100dc0u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x100dc4: 0xc643c  dsll32      $t4, $t4, 16
    ctx->pc = 0x100dc4u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << (32 + 16));
    // 0x100dc8: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x100dc8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x100dcc: 0xddcb0008  ld          $t3, 0x8($t6)
    ctx->pc = 0x100dccu;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 14), 8)));
    // 0x100dd0: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x100dd0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x100dd4: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x100dd4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x100dd8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x100dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x100ddc: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x100ddcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x100de0: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x100de0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x100de4: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x100de4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x100de8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x100de8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x100dec: 0x2113a  dsrl        $v0, $v0, 4
    ctx->pc = 0x100decu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 4);
    // 0x100df0: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x100df0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x100df4: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x100df4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x100df8: 0x1635824  and         $t3, $t3, $v1
    ctx->pc = 0x100df8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & GPR_U64(ctx, 3));
    // 0x100dfc: 0x872024  and         $a0, $a0, $a3
    ctx->pc = 0x100dfcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 7));
    // 0x100e00: 0x6343b  dsra        $a2, $a2, 16
    ctx->pc = 0x100e00u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> 16);
    // 0x100e04: 0xa543c  dsll32      $t2, $t2, 16
    ctx->pc = 0x100e04u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << (32 + 16));
    // 0x100e08: 0x8443c  dsll32      $t0, $t0, 16
    ctx->pc = 0x100e08u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 16));
    // 0x100e0c: 0xcc3025  or          $a2, $a2, $t4
    ctx->pc = 0x100e0cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 12));
    // 0x100e10: 0x8443b  dsra        $t0, $t0, 16
    ctx->pc = 0x100e10u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> 16);
    // 0x100e14: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x100e14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x100e18: 0x2137c  dsll32      $v0, $v0, 13
    ctx->pc = 0x100e18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 13));
    // 0x100e1c: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x100e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x100e20: 0x34078000  ori         $a3, $zero, 0x8000
    ctx->pc = 0x100e20u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x100e24: 0x73b3c  dsll32      $a3, $a3, 12
    ctx->pc = 0x100e24u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 12));
    // 0x100e28: 0xf4c3c  dsll32      $t1, $t7, 16
    ctx->pc = 0x100e28u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 15) << (32 + 16));
    // 0x100e2c: 0xa543f  dsra32      $t2, $t2, 16
    ctx->pc = 0x100e2cu;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 10) >> (32 + 16));
    // 0x100e30: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x100e30u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x100e34: 0x1485025  or          $t2, $t2, $t0
    ctx->pc = 0x100e34u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 8));
    // 0x100e38: 0x1635825  or          $t3, $t3, $v1
    ctx->pc = 0x100e38u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 3));
    // 0x100e3c: 0x872025  or          $a0, $a0, $a3
    ctx->pc = 0x100e3cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 7));
    // 0x100e40: 0xd6e3c  dsll32      $t5, $t5, 24
    ctx->pc = 0x100e40u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) << (32 + 24));
    // 0x100e44: 0x94c3b  dsra        $t1, $t1, 16
    ctx->pc = 0x100e44u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> 16);
    // 0x100e48: 0x18643c  dsll32      $t4, $t8, 16
    ctx->pc = 0x100e48u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 24) << (32 + 16));
    // 0x100e4c: 0xcd3025  or          $a2, $a2, $t5
    ctx->pc = 0x100e4cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 13));
    // 0x100e50: 0x12c4825  or          $t1, $t1, $t4
    ctx->pc = 0x100e50u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 12));
    // 0x100e54: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x100e54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x100e58: 0x24030051  addiu       $v1, $zero, 0x51
    ctx->pc = 0x100e58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
    // 0x100e5c: 0x24070052  addiu       $a3, $zero, 0x52
    ctx->pc = 0x100e5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
    // 0x100e60: 0x24080053  addiu       $t0, $zero, 0x53
    ctx->pc = 0x100e60u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
    // 0x100e64: 0xfdc40050  sd          $a0, 0x50($t6)
    ctx->pc = 0x100e64u;
    WRITE64(ADD32(GPR_U32(ctx, 14), 80), GPR_U64(ctx, 4));
    // 0x100e68: 0xfdc50000  sd          $a1, 0x0($t6)
    ctx->pc = 0x100e68u;
    WRITE64(ADD32(GPR_U32(ctx, 14), 0), GPR_U64(ctx, 5));
    // 0x100e6c: 0xfdcb0008  sd          $t3, 0x8($t6)
    ctx->pc = 0x100e6cu;
    WRITE64(ADD32(GPR_U32(ctx, 14), 8), GPR_U64(ctx, 11));
    // 0x100e70: 0xfdc60010  sd          $a2, 0x10($t6)
    ctx->pc = 0x100e70u;
    WRITE64(ADD32(GPR_U32(ctx, 14), 16), GPR_U64(ctx, 6));
    // 0x100e74: 0xfdc20018  sd          $v0, 0x18($t6)
    ctx->pc = 0x100e74u;
    WRITE64(ADD32(GPR_U32(ctx, 14), 24), GPR_U64(ctx, 2));
    // 0x100e78: 0xfdc90020  sd          $t1, 0x20($t6)
    ctx->pc = 0x100e78u;
    WRITE64(ADD32(GPR_U32(ctx, 14), 32), GPR_U64(ctx, 9));
    // 0x100e7c: 0xfdc30028  sd          $v1, 0x28($t6)
    ctx->pc = 0x100e7cu;
    WRITE64(ADD32(GPR_U32(ctx, 14), 40), GPR_U64(ctx, 3));
    // 0x100e80: 0xfdca0030  sd          $t2, 0x30($t6)
    ctx->pc = 0x100e80u;
    WRITE64(ADD32(GPR_U32(ctx, 14), 48), GPR_U64(ctx, 10));
    // 0x100e84: 0xfdc70038  sd          $a3, 0x38($t6)
    ctx->pc = 0x100e84u;
    WRITE64(ADD32(GPR_U32(ctx, 14), 56), GPR_U64(ctx, 7));
    // 0x100e88: 0xfdc80048  sd          $t0, 0x48($t6)
    ctx->pc = 0x100e88u;
    WRITE64(ADD32(GPR_U32(ctx, 14), 72), GPR_U64(ctx, 8));
    // 0x100e8c: 0xfdc00040  sd          $zero, 0x40($t6)
    ctx->pc = 0x100e8cu;
    WRITE64(ADD32(GPR_U32(ctx, 14), 64), GPR_U64(ctx, 0));
    // 0x100e90: 0xf  sync
    ctx->pc = 0x100e90u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x100e94: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x100e94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->pc = 0x100e98u;
}
