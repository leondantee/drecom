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

// Function: Shw_otset_em
// Address: 0x1e4cb0 - 0x1e4f84
void Shw_otset_em_0x1e4cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Shw_otset_em_0x1e4cb0");
#endif

    switch (ctx->pc) {
        case 0x1e4d38u: goto label_1e4d38;
        case 0x1e4d64u: goto label_1e4d64;
        case 0x1e4da4u: goto label_1e4da4;
        case 0x1e4db4u: goto label_1e4db4;
        case 0x1e4dd0u: goto label_1e4dd0;
        case 0x1e4df8u: goto label_1e4df8;
        case 0x1e4e14u: goto label_1e4e14;
        case 0x1e4e34u: goto label_1e4e34;
        case 0x1e4e40u: goto label_1e4e40;
        case 0x1e4ed0u: goto label_1e4ed0;
        case 0x1e4f10u: goto label_1e4f10;
        case 0x1e4f60u: goto label_1e4f60;
        default: break;
    }

    ctx->pc = 0x1e4cb0u;

    // 0x1e4cb0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1e4cb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x1e4cb4: 0x7fbf0040  sq          $ra, 0x40($sp)
    ctx->pc = 0x1e4cb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 31));
    // 0x1e4cb8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1e4cb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1e4cbc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1e4cbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1e4cc0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e4cc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e4cc4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e4cc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e4cc8: 0xafa400a8  sw          $a0, 0xA8($sp)
    ctx->pc = 0x1e4cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 4));
    // 0x1e4ccc: 0x3c117000  lui         $s1, 0x7000
    ctx->pc = 0x1e4cccu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)28672 << 16));
    // 0x1e4cd0: 0x3c0345bb  lui         $v1, 0x45BB
    ctx->pc = 0x1e4cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17851 << 16));
    // 0x1e4cd4: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x1e4cd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x1e4cd8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1e4cd8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e4cdc: 0x0  nop
    ctx->pc = 0x1e4cdcu;
    // NOP
    // 0x1e4ce0: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x1e4ce0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x1e4ce4: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x1e4ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x1e4ce8: 0x24639c00  addiu       $v1, $v1, -0x6400
    ctx->pc = 0x1e4ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941696));
    // 0x1e4cec: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1e4cecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1e4cf0: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x1e4cf0u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x389C00u));
    // 0x1e4cf4: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x1e4cf4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x1e4cf8: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x1e4cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x1e4cfc: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x1e4cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1e4d00: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x1e4d00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x1e4d04: 0x10600097  beqz        $v1, . + 4 + (0x97 << 2)
    ctx->pc = 0x1E4D04u;
    {
        const bool branch_taken_0x1e4d04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e4d04) {
            ctx->pc = 0x1E4F64u;
            goto label_1e4f64;
        }
    }
    ctx->pc = 0x1E4D0Cu;
    // 0x1e4d0c: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x1e4d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x1e4d10: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x1e4d10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x1e4d14: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1e4d14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1e4d18: 0x8c220af0  lw          $v0, 0xAF0($at)
    ctx->pc = 0x1e4d18u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x1e4d1c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1e4d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1e4d20: 0x24650030  addiu       $a1, $v1, 0x30
    ctx->pc = 0x1e4d20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x1e4d24: 0x24460190  addiu       $a2, $v0, 0x190
    ctx->pc = 0x1e4d24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 400));
    // 0x1e4d28: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x1e4d28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x1e4d2c: 0x34470007  ori         $a3, $v0, 0x7
    ctx->pc = 0x1e4d2cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)7);
    // 0x1e4d30: 0xc05a078  jal         func_1681E0
    ctx->pc = 0x1E4D30u;
    SET_GPR_U32(ctx, 31, 0x1E4D38u);
    ctx->pc = 0x1681E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1681E0u, 0x1E4D30u, 0x1E4D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4D38u;
label_1e4d38:
    // 0x1e4d38: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x1e4d38u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e4d3c: 0x16400089  bnez        $s2, . + 4 + (0x89 << 2)
    ctx->pc = 0x1E4D3Cu;
    {
        const bool branch_taken_0x1e4d3c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e4d3c) {
            ctx->pc = 0x1E4F64u;
            goto label_1e4f64;
        }
    }
    ctx->pc = 0x1E4D44u;
    // 0x1e4d44: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x1e4d44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x1e4d48: 0x8c5301ec  lw          $s3, 0x1EC($v0)
    ctx->pc = 0x1e4d48u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 492)));
    // 0x1e4d4c: 0x26700010  addiu       $s0, $s3, 0x10
    ctx->pc = 0x1e4d4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x1e4d50: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x1e4d50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x1e4d54: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x1e4d54u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1e4d58: 0x72203628  paddub      $a2, $s1, $zero
    ctx->pc = 0x1e4d58u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1e4d5c: 0xc0794d0  jal         func_1E5340
    ctx->pc = 0x1E4D5Cu;
    SET_GPR_U32(ctx, 31, 0x1E4D64u);
    ctx->pc = 0x1E5340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E5340u, 0x1E4D5Cu, 0x1E4D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4D64u;
label_1e4d64:
    // 0x1e4d64: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x1e4d64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x1e4d68: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x1e4d68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1e4d6c: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x1e4d6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x1e4d70: 0x14400059  bnez        $v0, . + 4 + (0x59 << 2)
    ctx->pc = 0x1E4D70u;
    {
        const bool branch_taken_0x1e4d70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e4d70) {
            ctx->pc = 0x1E4ED8u;
            goto label_1e4ed8;
        }
    }
    ctx->pc = 0x1E4D78u;
    // 0x1e4d78: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x1e4d78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x1e4d7c: 0x24420120  addiu       $v0, $v0, 0x120
    ctx->pc = 0x1e4d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x1e4d80: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x1e4d80u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e4d84: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x1e4d84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1e4d88: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x1e4d88u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x1e4d8c: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x1e4d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x1e4d90: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1e4d90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1e4d94: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x1e4d94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1e4d98: 0x24460020  addiu       $a2, $v0, 0x20
    ctx->pc = 0x1e4d98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x1e4d9c: 0xc040c80  jal         func_103200
    ctx->pc = 0x1E4D9Cu;
    SET_GPR_U32(ctx, 31, 0x1E4DA4u);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x1E4DA4u;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E4DA4u) { return; }
    ctx->pc = 0x1E4DA4u;
label_1e4da4:
    // 0x1e4da4: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1e4da4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1e4da8: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x1e4da8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1e4dac: 0xc040c24  jal         func_103090
    ctx->pc = 0x1E4DACu;
    SET_GPR_U32(ctx, 31, 0x1E4DB4u);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x1E4DB4u;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E4DB4u) { return; }
    ctx->pc = 0x1E4DB4u;
label_1e4db4:
    // 0x1e4db4: 0x3c0245bb  lui         $v0, 0x45BB
    ctx->pc = 0x1e4db4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17851 << 16));
    // 0x1e4db8: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x1e4db8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x1e4dbc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1e4dbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1e4dc0: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1e4dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1e4dc4: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x1e4dc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1e4dc8: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x1E4DC8u;
    SET_GPR_U32(ctx, 31, 0x1E4DD0u);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x1E4DD0u;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E4DD0u) { return; }
    ctx->pc = 0x1E4DD0u;
label_1e4dd0:
    // 0x1e4dd0: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x1e4dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x1e4dd4: 0xc44111e4  lwc1        $f1, 0x11E4($v0)
    ctx->pc = 0x1e4dd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e4dd8: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x1e4dd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e4ddc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1e4ddcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1e4de0: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x1e4de0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x1e4de4: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1e4de4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1e4de8: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x1e4de8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1e4dec: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x1e4decu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1e4df0: 0xc040c7a  jal         func_1031E8
    ctx->pc = 0x1E4DF0u;
    SET_GPR_U32(ctx, 31, 0x1E4DF8u);
    ctx->pc = 0x1031E8u;
    {
        ctx->pc = 0x1E4DF8u;
        ps2_stubs::sceVu0AddVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E4DF8u) { return; }
    ctx->pc = 0x1E4DF8u;
label_1e4df8:
    // 0x1e4df8: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1e4df8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1e4dfc: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x1e4dfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1e4e00: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x1e4e00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1e4e04: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x1e4e04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x1e4e08: 0x34471007  ori         $a3, $v0, 0x1007
    ctx->pc = 0x1e4e08u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4103);
    // 0x1e4e0c: 0xc05a078  jal         func_1681E0
    ctx->pc = 0x1E4E0Cu;
    SET_GPR_U32(ctx, 31, 0x1E4E14u);
    ctx->pc = 0x1681E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1681E0u, 0x1E4E0Cu, 0x1E4E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4E14u;
label_1e4e14:
    // 0x1e4e14: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x1e4e14u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e4e18: 0x1240001e  beqz        $s2, . + 4 + (0x1E << 2)
    ctx->pc = 0x1E4E18u;
    {
        const bool branch_taken_0x1e4e18 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e4e18) {
            ctx->pc = 0x1E4E94u;
            goto label_1e4e94;
        }
    }
    ctx->pc = 0x1E4E20u;
    // 0x1e4e20: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1e4e20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1e4e24: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x1e4e24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1e4e28: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x1e4e28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1e4e2c: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x1E4E2Cu;
    SET_GPR_U32(ctx, 31, 0x1E4E34u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x1E4E2Cu, 0x1E4E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4E34u;
label_1e4e34:
    // 0x1e4e34: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1e4e34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1e4e38: 0xc067588  jal         func_19D620
    ctx->pc = 0x1E4E38u;
    SET_GPR_U32(ctx, 31, 0x1E4E40u);
    ctx->pc = 0x19D620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D620u, 0x1E4E38u, 0x1E4E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4E40u;
label_1e4e40:
    // 0x1e4e40: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x1e4e40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x1e4e44: 0xc7a1009c  lwc1        $f1, 0x9C($sp)
    ctx->pc = 0x1e4e44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e4e48: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x1e4e48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x1e4e4c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e4e4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e4e50: 0x0  nop
    ctx->pc = 0x1e4e50u;
    // NOP
    // 0x1e4e54: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1e4e54u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1e4e58: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x1e4e58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x1e4e5c: 0xc7a1009c  lwc1        $f1, 0x9C($sp)
    ctx->pc = 0x1e4e5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e4e60: 0x3c0245bb  lui         $v0, 0x45BB
    ctx->pc = 0x1e4e60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17851 << 16));
    // 0x1e4e64: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x1e4e64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x1e4e68: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e4e68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e4e6c: 0x0  nop
    ctx->pc = 0x1e4e6cu;
    // NOP
    // 0x1e4e70: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1e4e70u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e4e74: 0x0  nop
    ctx->pc = 0x1e4e74u;
    // NOP
    // 0x1e4e78: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x1E4E78u;
    {
        const bool branch_taken_0x1e4e78 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e4e78) {
            ctx->pc = 0x1E4E94u;
            goto label_1e4e94;
        }
    }
    ctx->pc = 0x1E4E80u;
    // 0x1e4e80: 0x3c0245bb  lui         $v0, 0x45BB
    ctx->pc = 0x1e4e80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17851 << 16));
    // 0x1e4e84: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x1e4e84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x1e4e88: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e4e88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e4e8c: 0x0  nop
    ctx->pc = 0x1e4e8cu;
    // NOP
    // 0x1e4e90: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x1e4e90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
label_1e4e94:
    // 0x1e4e94: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1e4e94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1e4e98: 0x8c22013c  lw          $v0, 0x13C($at)
    ctx->pc = 0x1e4e98u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D013Cu));
    // 0x1e4e9c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1e4e9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1e4ea0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1e4ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e4ea4: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x1e4ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x1e4ea8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e4ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e4eac: 0x8c4701f0  lw          $a3, 0x1F0($v0)
    ctx->pc = 0x1e4eacu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 496)));
    // 0x1e4eb0: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x1e4eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x1e4eb4: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x1e4eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x1e4eb8: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x1e4eb8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1e4ebc: 0x72203628  paddub      $a2, $s1, $zero
    ctx->pc = 0x1e4ebcu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1e4ec0: 0x24480020  addiu       $t0, $v0, 0x20
    ctx->pc = 0x1e4ec0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x1e4ec4: 0xc7ac009c  lwc1        $f12, 0x9C($sp)
    ctx->pc = 0x1e4ec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1e4ec8: 0xc0796a8  jal         func_1E5AA0
    ctx->pc = 0x1E4EC8u;
    SET_GPR_U32(ctx, 31, 0x1E4ED0u);
    ctx->pc = 0x1E5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E5AA0u, 0x1E4EC8u, 0x1E4ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4ED0u;
label_1e4ed0:
    // 0x1e4ed0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1E4ED0u;
    {
        const bool branch_taken_0x1e4ed0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e4ed0) {
            ctx->pc = 0x1E4F10u;
            goto label_1e4f10;
        }
    }
    ctx->pc = 0x1E4ED8u;
label_1e4ed8:
    // 0x1e4ed8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1e4ed8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1e4edc: 0x8c22013c  lw          $v0, 0x13C($at)
    ctx->pc = 0x1e4edcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D013Cu));
    // 0x1e4ee0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1e4ee0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1e4ee4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1e4ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e4ee8: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x1e4ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x1e4eec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e4eecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e4ef0: 0x8c4701f0  lw          $a3, 0x1F0($v0)
    ctx->pc = 0x1e4ef0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 496)));
    // 0x1e4ef4: 0x3c0244fa  lui         $v0, 0x44FA
    ctx->pc = 0x1e4ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17658 << 16));
    // 0x1e4ef8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1e4ef8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1e4efc: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x1e4efcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x1e4f00: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x1e4f00u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1e4f04: 0x72203628  paddub      $a2, $s1, $zero
    ctx->pc = 0x1e4f04u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1e4f08: 0xc079d58  jal         func_1E7560
    ctx->pc = 0x1E4F08u;
    SET_GPR_U32(ctx, 31, 0x1E4F10u);
    ctx->pc = 0x1E7560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7560u, 0x1E4F08u, 0x1E4F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4F10u;
label_1e4f10:
    // 0x1e4f10: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1e4f10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1e4f14: 0x8c23013c  lw          $v1, 0x13C($at)
    ctx->pc = 0x1e4f14u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D013Cu));
    // 0x1e4f18: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1e4f18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1e4f1c: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x1e4f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1e4f20: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x1e4f20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x1e4f24: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1e4f24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1e4f28: 0x8c6301f0  lw          $v1, 0x1F0($v1)
    ctx->pc = 0x1e4f28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 496)));
    // 0x1e4f2c: 0xdc630000  ld          $v1, 0x0($v1)
    ctx->pc = 0x1e4f2cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e4f30: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1e4f30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1e4f34: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1E4F34u;
    {
        const bool branch_taken_0x1e4f34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e4f34) {
            ctx->pc = 0x1E4F60u;
            goto label_1e4f60;
        }
    }
    ctx->pc = 0x1E4F3Cu;
    // 0x1e4f3c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1e4f3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1e4f40: 0x8c22013c  lw          $v0, 0x13C($at)
    ctx->pc = 0x1e4f40u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D013Cu));
    // 0x1e4f44: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1e4f44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1e4f48: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1e4f48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e4f4c: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x1e4f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x1e4f50: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e4f50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e4f54: 0x8c4401f0  lw          $a0, 0x1F0($v0)
    ctx->pc = 0x1e4f54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 496)));
    // 0x1e4f58: 0xc0792dc  jal         func_1E4B70
    ctx->pc = 0x1E4F58u;
    SET_GPR_U32(ctx, 31, 0x1E4F60u);
    ctx->pc = 0x1E4B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E4B70u, 0x1E4F58u, 0x1E4F60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4F60u;
label_1e4f60:
    // 0x1e4f60: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x1e4f60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_1e4f64:
    // 0x1e4f64: 0x7bbf0040  lq          $ra, 0x40($sp)
    ctx->pc = 0x1e4f64u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e4f68: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1e4f68u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e4f6c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1e4f6cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e4f70: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e4f70u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e4f74: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e4f74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e4f78: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x1e4f78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1e4f7c: 0x3e00008  jr          $ra
    ctx->pc = 0x1E4F7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E4F7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E4F84u;
}
