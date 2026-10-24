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

// Function: entry_00314b70
// Address: 0x314b70 - 0x314d48
void entry_00314b70_0x314b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00314b70_0x314b70");
#endif

    switch (ctx->pc) {
        case 0x314b9cu: goto label_314b9c;
        case 0x314bc8u: goto label_314bc8;
        case 0x314bf4u: goto label_314bf4;
        case 0x314c80u: goto label_314c80;
        default: break;
    }

    ctx->pc = 0x314b70u;

    // 0x314b70: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x314b70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x314b74: 0x2473a610  addiu       $s3, $v1, -0x59F0
    ctx->pc = 0x314b74u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944272));
    // 0x314b78: 0x8e700000  lw          $s0, 0x0($s3)
    ctx->pc = 0x314b78u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x53A610u));
    // 0x314b7c: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x314b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x314b80: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x314b80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x314b84: 0x12030070  beq         $s0, $v1, . + 4 + (0x70 << 2)
    ctx->pc = 0x314B84u;
    {
        const bool branch_taken_0x314b84 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x314b84) {
            ctx->pc = 0x314D48u;
            return;
        }
    }
    ctx->pc = 0x314B8Cu;
    // 0x314b8c: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x314b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x314b90: 0xa202011c  sb          $v0, 0x11C($s0)
    ctx->pc = 0x314b90u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 284), (uint8_t)GPR_U32(ctx, 2));
    // 0x314b94: 0xc067654  jal         func_19D950
    ctx->pc = 0x314B94u;
    SET_GPR_U32(ctx, 31, 0x314B9Cu);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x314B94u, 0x314B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x314B9Cu;
label_314b9c:
    // 0x314b9c: 0x3c02420c  lui         $v0, 0x420C
    ctx->pc = 0x314b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16908 << 16));
    // 0x314ba0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x314ba0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x314ba4: 0x0  nop
    ctx->pc = 0x314ba4u;
    // NOP
    // 0x314ba8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x314ba8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x314bac: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x314bacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x314bb0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x314bb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x314bb4: 0x0  nop
    ctx->pc = 0x314bb4u;
    // NOP
    // 0x314bb8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x314bb8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x314bbc: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x314bbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x314bc0: 0xc067654  jal         func_19D950
    ctx->pc = 0x314BC0u;
    SET_GPR_U32(ctx, 31, 0x314BC8u);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x314BC0u, 0x314BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x314BC8u;
label_314bc8:
    // 0x314bc8: 0x3c024234  lui         $v0, 0x4234
    ctx->pc = 0x314bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16948 << 16));
    // 0x314bcc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x314bccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x314bd0: 0x0  nop
    ctx->pc = 0x314bd0u;
    // NOP
    // 0x314bd4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x314bd4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x314bd8: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x314bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x314bdc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x314bdcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x314be0: 0x0  nop
    ctx->pc = 0x314be0u;
    // NOP
    // 0x314be4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x314be4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x314be8: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x314be8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x314bec: 0xc067654  jal         func_19D950
    ctx->pc = 0x314BECu;
    SET_GPR_U32(ctx, 31, 0x314BF4u);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x314BECu, 0x314BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x314BF4u;
label_314bf4:
    // 0x314bf4: 0x3c02425c  lui         $v0, 0x425C
    ctx->pc = 0x314bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16988 << 16));
    // 0x314bf8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x314bf8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x314bfc: 0x0  nop
    ctx->pc = 0x314bfcu;
    // NOP
    // 0x314c00: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x314c00u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x314c04: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x314c04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x314c08: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x314c08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x314c0c: 0x0  nop
    ctx->pc = 0x314c0cu;
    // NOP
    // 0x314c10: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x314c10u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x314c14: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x314c14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x314c18: 0x3c0242d8  lui         $v0, 0x42D8
    ctx->pc = 0x314c18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17112 << 16));
    // 0x314c1c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x314c1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x314c20: 0x0  nop
    ctx->pc = 0x314c20u;
    // NOP
    // 0x314c24: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x314c24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x314c28: 0x3c023f77  lui         $v0, 0x3F77
    ctx->pc = 0x314c28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16247 << 16));
    // 0x314c2c: 0x34420a3d  ori         $v0, $v0, 0xA3D
    ctx->pc = 0x314c2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2621);
    // 0x314c30: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x314c30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x314c34: 0x0  nop
    ctx->pc = 0x314c34u;
    // NOP
    // 0x314c38: 0xe60000a0  swc1        $f0, 0xA0($s0)
    ctx->pc = 0x314c38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 160), bits); }
    // 0x314c3c: 0x3c023f74  lui         $v0, 0x3F74
    ctx->pc = 0x314c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16244 << 16));
    // 0x314c40: 0x34427ae1  ori         $v0, $v0, 0x7AE1
    ctx->pc = 0x314c40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)31457);
    // 0x314c44: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x314c44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x314c48: 0x0  nop
    ctx->pc = 0x314c48u;
    // NOP
    // 0x314c4c: 0xe60000a4  swc1        $f0, 0xA4($s0)
    ctx->pc = 0x314c4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 164), bits); }
    // 0x314c50: 0x3c023f74  lui         $v0, 0x3F74
    ctx->pc = 0x314c50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16244 << 16));
    // 0x314c54: 0x34427ae1  ori         $v0, $v0, 0x7AE1
    ctx->pc = 0x314c54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)31457);
    // 0x314c58: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x314c58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x314c5c: 0x0  nop
    ctx->pc = 0x314c5cu;
    // NOP
    // 0x314c60: 0xe60000a8  swc1        $f0, 0xA8($s0)
    ctx->pc = 0x314c60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 168), bits); }
    // 0x314c64: 0x3c023f6c  lui         $v0, 0x3F6C
    ctx->pc = 0x314c64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16236 << 16));
    // 0x314c68: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x314c68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x314c6c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x314c6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x314c70: 0x0  nop
    ctx->pc = 0x314c70u;
    // NOP
    // 0x314c74: 0xe60000ac  swc1        $f0, 0xAC($s0)
    ctx->pc = 0x314c74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 172), bits); }
    // 0x314c78: 0xc067648  jal         func_19D920
    ctx->pc = 0x314C78u;
    SET_GPR_U32(ctx, 31, 0x314C80u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x314C78u, 0x314C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x314C80u;
label_314c80:
    // 0x314c80: 0x3c0342be  lui         $v1, 0x42BE
    ctx->pc = 0x314c80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17086 << 16));
    // 0x314c84: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x314c84u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x314c88: 0x0  nop
    ctx->pc = 0x314c88u;
    // NOP
    // 0x314c8c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x314c8cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x314c90: 0x3c0342f0  lui         $v1, 0x42F0
    ctx->pc = 0x314c90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17136 << 16));
    // 0x314c94: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x314c94u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x314c98: 0x0  nop
    ctx->pc = 0x314c98u;
    // NOP
    // 0x314c9c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x314c9cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x314ca0: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x314ca0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x314ca4: 0x3c033f99  lui         $v1, 0x3F99
    ctx->pc = 0x314ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16281 << 16));
    // 0x314ca8: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x314ca8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
    // 0x314cac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x314cacu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x314cb0: 0x0  nop
    ctx->pc = 0x314cb0u;
    // NOP
    // 0x314cb4: 0xe6000108  swc1        $f0, 0x108($s0)
    ctx->pc = 0x314cb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 264), bits); }
    // 0x314cb8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x314cb8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x314cbc: 0x0  nop
    ctx->pc = 0x314cbcu;
    // NOP
    // 0x314cc0: 0xe6000050  swc1        $f0, 0x50($s0)
    ctx->pc = 0x314cc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x314cc4: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x314cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x314cc8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x314cc8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x314ccc: 0x0  nop
    ctx->pc = 0x314cccu;
    // NOP
    // 0x314cd0: 0xe6000054  swc1        $f0, 0x54($s0)
    ctx->pc = 0x314cd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x314cd4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x314cd4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x314cd8: 0x0  nop
    ctx->pc = 0x314cd8u;
    // NOP
    // 0x314cdc: 0xe6000058  swc1        $f0, 0x58($s0)
    ctx->pc = 0x314cdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x314ce0: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x314ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x314ce4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x314ce4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x314ce8: 0x0  nop
    ctx->pc = 0x314ce8u;
    // NOP
    // 0x314cec: 0xe6000060  swc1        $f0, 0x60($s0)
    ctx->pc = 0x314cecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 96), bits); }
    // 0x314cf0: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x314cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x314cf4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x314cf4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x314cf8: 0x0  nop
    ctx->pc = 0x314cf8u;
    // NOP
    // 0x314cfc: 0xe6000064  swc1        $f0, 0x64($s0)
    ctx->pc = 0x314cfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 100), bits); }
    // 0x314d00: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x314d00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x314d04: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x314d04u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x314d08: 0x0  nop
    ctx->pc = 0x314d08u;
    // NOP
    // 0x314d0c: 0xe6000068  swc1        $f0, 0x68($s0)
    ctx->pc = 0x314d0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 104), bits); }
    // 0x314d10: 0x3c033d79  lui         $v1, 0x3D79
    ctx->pc = 0x314d10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15737 << 16));
    // 0x314d14: 0x3463db23  ori         $v1, $v1, 0xDB23
    ctx->pc = 0x314d14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)56099);
    // 0x314d18: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x314d18u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x314d1c: 0x0  nop
    ctx->pc = 0x314d1cu;
    // NOP
    // 0x314d20: 0xe60000f4  swc1        $f0, 0xF4($s0)
    ctx->pc = 0x314d20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 244), bits); }
    // 0x314d24: 0x3c033f78  lui         $v1, 0x3F78
    ctx->pc = 0x314d24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16248 << 16));
    // 0x314d28: 0x346351ec  ori         $v1, $v1, 0x51EC
    ctx->pc = 0x314d28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)20972);
    // 0x314d2c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x314d2cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x314d30: 0x0  nop
    ctx->pc = 0x314d30u;
    // NOP
    // 0x314d34: 0xe60000fc  swc1        $f0, 0xFC($s0)
    ctx->pc = 0x314d34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 252), bits); }
    // 0x314d38: 0xa2000139  sb          $zero, 0x139($s0)
    ctx->pc = 0x314d38u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 313), (uint8_t)GPR_U32(ctx, 0));
    // 0x314d3c: 0x24030028  addiu       $v1, $zero, 0x28
    ctx->pc = 0x314d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x314d40: 0xae030100  sw          $v1, 0x100($s0)
    ctx->pc = 0x314d40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 3));
    // 0x314d44: 0x0  nop
    ctx->pc = 0x314d44u;
    // NOP
    ctx->pc = 0x314d48u;
}
