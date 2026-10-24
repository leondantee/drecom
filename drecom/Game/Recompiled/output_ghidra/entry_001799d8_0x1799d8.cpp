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

// Function: entry_001799d8
// Address: 0x1799d8 - 0x179b38
void entry_001799d8_0x1799d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001799d8_0x1799d8");
#endif

    switch (ctx->pc) {
        case 0x179b28u: goto label_179b28;
        default: break;
    }

    ctx->pc = 0x1799d8u;

    // 0x1799d8: 0x3c107000  lui         $s0, 0x7000
    ctx->pc = 0x1799d8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)28672 << 16));
    // 0x1799dc: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1799dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1799e0: 0x34420006  ori         $v0, $v0, 0x6
    ctx->pc = 0x1799e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
    // 0x1799e4: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x1799e4u;
    runtime->Store64(rdram, ctx, 0x70000000u, GPR_U64(ctx, 2));
    // 0x1799e8: 0xfe000008  sd          $zero, 0x8($s0)
    ctx->pc = 0x1799e8u;
    runtime->Store64(rdram, ctx, 0x70000008u, GPR_U64(ctx, 0));
    // 0x1799ec: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x1799ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1799f0: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1799f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1799f4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1799f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1799f8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1799f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1799fc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1799fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x179a00: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x179a00u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x179a04: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x179a04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x179a08: 0xfe020008  sd          $v0, 0x8($s0)
    ctx->pc = 0x179a08u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 2));
    // 0x179a0c: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x179a0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x179a10: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x179a10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x179a14: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x179a14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x179a18: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x179a18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x179a1c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x179a1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x179a20: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x179a20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x179a24: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x179a24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x179a28: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x179a28u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x179a2c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x179a2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x179a30: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x179a30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x179a34: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x179a34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x179a38: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x179a38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x179a3c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x179a3cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x179a40: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x179a40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x179a44: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x179a44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x179a48: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x179a48u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x179a4c: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x179a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x179a50: 0xfe020008  sd          $v0, 0x8($s0)
    ctx->pc = 0x179a50u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 2));
    // 0x179a54: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x179a54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x179a58: 0x16103c  dsll32      $v0, $s6, 0
    ctx->pc = 0x179a58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) << (32 + 0));
    // 0x179a5c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x179a5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x179a60: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x179a60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x179a64: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x179a64u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x179a68: 0x24020051  addiu       $v0, $zero, 0x51
    ctx->pc = 0x179a68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
    // 0x179a6c: 0xfe020008  sd          $v0, 0x8($s0)
    ctx->pc = 0x179a6cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 2));
    // 0x179a70: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x179a70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x179a74: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x179a74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x179a78: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x179a78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x179a7c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x179a7cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x179a80: 0x15103c  dsll32      $v0, $s5, 0
    ctx->pc = 0x179a80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) << (32 + 0));
    // 0x179a84: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x179a84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x179a88: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x179a88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x179a8c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x179a8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x179a90: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x179a90u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x179a94: 0x24020052  addiu       $v0, $zero, 0x52
    ctx->pc = 0x179a94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
    // 0x179a98: 0xfe020008  sd          $v0, 0x8($s0)
    ctx->pc = 0x179a98u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 2));
    // 0x179a9c: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x179a9cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x179aa0: 0xfe000000  sd          $zero, 0x0($s0)
    ctx->pc = 0x179aa0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 0));
    // 0x179aa4: 0x24020053  addiu       $v0, $zero, 0x53
    ctx->pc = 0x179aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
    // 0x179aa8: 0xfe020008  sd          $v0, 0x8($s0)
    ctx->pc = 0x179aa8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 2));
    // 0x179aac: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x179aacu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x179ab0: 0x2663000f  addiu       $v1, $s3, 0xF
    ctx->pc = 0x179ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 15));
    // 0x179ab4: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x179ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x179ab8: 0x31102  srl         $v0, $v1, 4
    ctx->pc = 0x179ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x179abc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x179abcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x179ac0: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x179ac0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x179ac4: 0x34438000  ori         $v1, $v0, 0x8000
    ctx->pc = 0x179ac4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x179ac8: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x179ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x179acc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x179accu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x179ad0: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x179ad0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x179ad4: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x179ad4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x179ad8: 0xfe000008  sd          $zero, 0x8($s0)
    ctx->pc = 0x179ad8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 0));
    // 0x179adc: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x179adcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x179ae0: 0x2663000f  addiu       $v1, $s3, 0xF
    ctx->pc = 0x179ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 15));
    // 0x179ae4: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x179ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x179ae8: 0x31102  srl         $v0, $v1, 4
    ctx->pc = 0x179ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x179aec: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x179aecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x179af0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x179af0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x179af4: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x179af4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x179af8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x179af8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x179afc: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x179afcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x179b00: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x179b00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x179b04: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x179b04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x179b08: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x179b08u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x179b0c: 0xfe000008  sd          $zero, 0x8($s0)
    ctx->pc = 0x179b0cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 0));
    // 0x179b10: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x179b10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x179b14: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x179b14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x179b18: 0x3444a000  ori         $a0, $v0, 0xA000
    ctx->pc = 0x179b18u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)40960);
    // 0x179b1c: 0x3c05f000  lui         $a1, 0xF000
    ctx->pc = 0x179b1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)61440 << 16));
    // 0x179b20: 0xc04086e  jal         func_1021B8
    ctx->pc = 0x179B20u;
    SET_GPR_U32(ctx, 31, 0x179B28u);
    ctx->pc = 0x1021B8u;
    {
        ctx->pc = 0x179B28u;
        ps2_stubs::sceDmaSend(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x179B28u) { return; }
    ctx->pc = 0x179B28u;
label_179b28:
    // 0x179b28: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x179b28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x179b2c: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x179b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x179b30: 0xafa300a8  sw          $v1, 0xA8($sp)
    ctx->pc = 0x179b30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 3));
    // 0x179b34: 0x2d5b021  addu        $s6, $s6, $s5
    ctx->pc = 0x179b34u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 21)));
    ctx->pc = 0x179b38u;
}
