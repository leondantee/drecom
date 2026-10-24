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

// Function: entry_0021e930
// Address: 0x21e930 - 0x21ea74
void entry_0021e930_0x21e930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021e930_0x21e930");
#endif

    switch (ctx->pc) {
        case 0x21e984u: goto label_21e984;
        default: break;
    }

    ctx->pc = 0x21e930u;

    // 0x21e930: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x21e930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x21e934: 0x8c640124  lw          $a0, 0x124($v1)
    ctx->pc = 0x21e934u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 292)));
    // 0x21e938: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x21e938u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x21e93c: 0x148300c3  bne         $a0, $v1, . + 4 + (0xC3 << 2)
    ctx->pc = 0x21E93Cu;
    {
        const bool branch_taken_0x21e93c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x21e93c) {
            ctx->pc = 0x21EC4Cu;
            return;
        }
    }
    ctx->pc = 0x21E944u;
    // 0x21e944: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x21e944u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x21e948: 0x8c710000  lw          $s1, 0x0($v1)
    ctx->pc = 0x21e948u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x21e94c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x21e94cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x21e950: 0x8c63012c  lw          $v1, 0x12C($v1)
    ctx->pc = 0x21e950u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 300)));
    // 0x21e954: 0x146000b1  bnez        $v1, . + 4 + (0xB1 << 2)
    ctx->pc = 0x21E954u;
    {
        const bool branch_taken_0x21e954 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x21e954) {
            ctx->pc = 0x21EC1Cu;
            return;
        }
    }
    ctx->pc = 0x21E95Cu;
    // 0x21e95c: 0x8e24012c  lw          $a0, 0x12C($s1)
    ctx->pc = 0x21e95cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 300)));
    // 0x21e960: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x21e960u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21e964: 0x14830088  bne         $a0, $v1, . + 4 + (0x88 << 2)
    ctx->pc = 0x21E964u;
    {
        const bool branch_taken_0x21e964 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x21e964) {
            ctx->pc = 0x21EB88u;
            return;
        }
    }
    ctx->pc = 0x21E96Cu;
    // 0x21e96c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x21e96cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x21e970: 0x244400b0  addiu       $a0, $v0, 0xB0
    ctx->pc = 0x21e970u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    // 0x21e974: 0x262500b0  addiu       $a1, $s1, 0xB0
    ctx->pc = 0x21e974u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 176));
    // 0x21e978: 0x72203628  paddub      $a2, $s1, $zero
    ctx->pc = 0x21e978u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x21e97c: 0xc08786c  jal         func_21E1B0
    ctx->pc = 0x21E97Cu;
    SET_GPR_U32(ctx, 31, 0x21E984u);
    ctx->pc = 0x21E1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21E1B0u, 0x21E97Cu, 0x21E984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E984u;
label_21e984:
    // 0x21e984: 0x10400080  beqz        $v0, . + 4 + (0x80 << 2)
    ctx->pc = 0x21E984u;
    {
        const bool branch_taken_0x21e984 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21e984) {
            ctx->pc = 0x21EB88u;
            return;
        }
    }
    ctx->pc = 0x21E98Cu;
    // 0x21e98c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x21e98cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21e990: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x21e990u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x21e994: 0xac64012c  sw          $a0, 0x12C($v1)
    ctx->pc = 0x21e994u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 300), GPR_U32(ctx, 4));
    // 0x21e998: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x21e998u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x21e99c: 0x24630050  addiu       $v1, $v1, 0x50
    ctx->pc = 0x21e99cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
    // 0x21e9a0: 0x7c600000  sq          $zero, 0x0($v1)
    ctx->pc = 0x21e9a0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 0));
    // 0x21e9a4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x21e9a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x21e9a8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21e9a8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21e9ac: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x21e9acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x21e9b0: 0xe460005c  swc1        $f0, 0x5C($v1)
    ctx->pc = 0x21e9b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 92), bits); }
    // 0x21e9b4: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x21e9b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x21e9b8: 0x24630080  addiu       $v1, $v1, 0x80
    ctx->pc = 0x21e9b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x21e9bc: 0x7c600000  sq          $zero, 0x0($v1)
    ctx->pc = 0x21e9bcu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 0));
    // 0x21e9c0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x21e9c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x21e9c4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21e9c4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21e9c8: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x21e9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x21e9cc: 0xe460008c  swc1        $f0, 0x8C($v1)
    ctx->pc = 0x21e9ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 140), bits); }
    // 0x21e9d0: 0x3c033f7d  lui         $v1, 0x3F7D
    ctx->pc = 0x21e9d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16253 << 16));
    // 0x21e9d4: 0x346370a4  ori         $v1, $v1, 0x70A4
    ctx->pc = 0x21e9d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)28836);
    // 0x21e9d8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21e9d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21e9dc: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x21e9dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x21e9e0: 0xe46000ac  swc1        $f0, 0xAC($v1)
    ctx->pc = 0x21e9e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 172), bits); }
    // 0x21e9e4: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x21e9e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21e9e8: 0x3c033f66  lui         $v1, 0x3F66
    ctx->pc = 0x21e9e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16230 << 16));
    // 0x21e9ec: 0x34636666  ori         $v1, $v1, 0x6666
    ctx->pc = 0x21e9ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26214);
    // 0x21e9f0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21e9f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21e9f4: 0x0  nop
    ctx->pc = 0x21e9f4u;
    // NOP
    // 0x21e9f8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x21e9f8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21e9fc: 0x0  nop
    ctx->pc = 0x21e9fcu;
    // NOP
    // 0x21ea00: 0x4501001c  bc1t        . + 4 + (0x1C << 2)
    ctx->pc = 0x21EA00u;
    {
        const bool branch_taken_0x21ea00 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x21ea00) {
            ctx->pc = 0x21EA74u;
            return;
        }
    }
    ctx->pc = 0x21EA08u;
    // 0x21ea08: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x21ea08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x21ea0c: 0x8c640120  lw          $a0, 0x120($v1)
    ctx->pc = 0x21ea0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 288)));
    // 0x21ea10: 0x24030034  addiu       $v1, $zero, 0x34
    ctx->pc = 0x21ea10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x21ea14: 0x1483005c  bne         $a0, $v1, . + 4 + (0x5C << 2)
    ctx->pc = 0x21EA14u;
    {
        const bool branch_taken_0x21ea14 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x21ea14) {
            ctx->pc = 0x21EB88u;
            return;
        }
    }
    ctx->pc = 0x21EA1Cu;
    // 0x21ea1c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x21ea1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x21ea20: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x21ea20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x21ea24: 0xa064011e  sb          $a0, 0x11E($v1)
    ctx->pc = 0x21ea24u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 286), (uint8_t)GPR_U32(ctx, 4));
    // 0x21ea28: 0x3c033fc9  lui         $v1, 0x3FC9
    ctx->pc = 0x21ea28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16329 << 16));
    // 0x21ea2c: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x21ea2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x21ea30: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21ea30u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21ea34: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x21ea34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x21ea38: 0xe4600040  swc1        $f0, 0x40($v1)
    ctx->pc = 0x21ea38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 64), bits); }
    // 0x21ea3c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x21ea3cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21ea40: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x21ea40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x21ea44: 0xe4600030  swc1        $f0, 0x30($v1)
    ctx->pc = 0x21ea44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 48), bits); }
    // 0x21ea48: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x21ea48u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21ea4c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x21ea4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x21ea50: 0xe4600034  swc1        $f0, 0x34($v1)
    ctx->pc = 0x21ea50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 52), bits); }
    // 0x21ea54: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x21ea54u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21ea58: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x21ea58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x21ea5c: 0xe4600038  swc1        $f0, 0x38($v1)
    ctx->pc = 0x21ea5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 56), bits); }
    // 0x21ea60: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x21ea60u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21ea64: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x21ea64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x21ea68: 0xe460003c  swc1        $f0, 0x3C($v1)
    ctx->pc = 0x21ea68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 60), bits); }
    // 0x21ea6c: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x21EA6Cu;
    {
        const bool branch_taken_0x21ea6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21ea6c) {
            ctx->pc = 0x21EB88u;
            return;
        }
    }
    ctx->pc = 0x21EA74u;
}
