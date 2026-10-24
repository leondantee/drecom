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

// Function: entry_00122ad0
// Address: 0x122ad0 - 0x122b9c
void entry_00122ad0_0x122ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00122ad0_0x122ad0");
#endif

    switch (ctx->pc) {
        case 0x122b4cu: goto label_122b4c;
        default: break;
    }

    ctx->pc = 0x122ad0u;

    // 0x122ad0: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x122ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x122ad4: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x122ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x122ad8: 0x3c068000  lui         $a2, 0x8000
    ctx->pc = 0x122ad8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32768 << 16));
    // 0x122adc: 0x462824  and         $a1, $v0, $a2
    ctx->pc = 0x122adcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x122ae0: 0x14a0002e  bnez        $a1, . + 4 + (0x2E << 2)
    ctx->pc = 0x122AE0u;
    {
        const bool branch_taken_0x122ae0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x122ae0) {
            ctx->pc = 0x122B9Cu;
            return;
        }
    }
    ctx->pc = 0x122AE8u;
    // 0x122ae8: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x122ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x122aec: 0x948411f4  lhu         $a0, 0x11F4($a0)
    ctx->pc = 0x122aecu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4596)));
    // 0x122af0: 0x3085ffff  andi        $a1, $a0, 0xFFFF
    ctx->pc = 0x122af0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x122af4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x122af4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x122af8: 0x10a40028  beq         $a1, $a0, . + 4 + (0x28 << 2)
    ctx->pc = 0x122AF8u;
    {
        const bool branch_taken_0x122af8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x122af8) {
            ctx->pc = 0x122B9Cu;
            return;
        }
    }
    ctx->pc = 0x122B00u;
    // 0x122b00: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x122b00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x122b04: 0x8c860008  lw          $a2, 0x8($a0)
    ctx->pc = 0x122b04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x122b08: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x122b08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x122b0c: 0xc31825  or          $v1, $a2, $v1
    ctx->pc = 0x122b0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x122b10: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x122b10u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x122b14: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x122b14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x122b18: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x122b18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x122b1c: 0x3c030010  lui         $v1, 0x10
    ctx->pc = 0x122b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
    // 0x122b20: 0xa31825  or          $v1, $a1, $v1
    ctx->pc = 0x122b20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x122b24: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x122b24u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x122b28: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x122b28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x122b2c: 0xc48111f8  lwc1        $f1, 0x11F8($a0)
    ctx->pc = 0x122b2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x122b30: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x122b30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x122b34: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x122b34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x122b38: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x122b38u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x122b3c: 0x0  nop
    ctx->pc = 0x122b3cu;
    // NOP
    // 0x122b40: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x122b40u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x122b44: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x122B44u;
    SET_GPR_U32(ctx, 31, 0x122B4Cu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x122B44u, 0x122B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122B4Cu;
label_122b4c:
    // 0x122b4c: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x122b4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x122b50: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x122b50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x122b54: 0x908309df  lbu         $v1, 0x9DF($a0)
    ctx->pc = 0x122b54u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2527)));
    // 0x122b58: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x122b58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x122b5c: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x122b5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x122b60: 0x14600073  bnez        $v1, . + 4 + (0x73 << 2)
    ctx->pc = 0x122B60u;
    {
        const bool branch_taken_0x122b60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x122b60) {
            ctx->pc = 0x122D30u;
            return;
        }
    }
    ctx->pc = 0x122B68u;
    // 0x122b68: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x122b68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x122b6c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x122b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x122b70: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x122b70u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x122b74: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x122b74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x122b78: 0xa0800001  sb          $zero, 0x1($a0)
    ctx->pc = 0x122b78u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x122b7c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x122b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x122b80: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x122b80u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x122b84: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x122b84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x122b88: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x122b88u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x122b8c: 0x8fa60078  lw          $a2, 0x78($sp)
    ctx->pc = 0x122b8cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x122b90: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x122b90u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
    // 0x122b94: 0x10000066  b           . + 4 + (0x66 << 2)
    ctx->pc = 0x122B94u;
    {
        const bool branch_taken_0x122b94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x122b94) {
            ctx->pc = 0x122D30u;
            return;
        }
    }
    ctx->pc = 0x122B9Cu;
}
