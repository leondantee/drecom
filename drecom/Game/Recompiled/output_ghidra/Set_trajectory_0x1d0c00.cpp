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

// Function: Set_trajectory
// Address: 0x1d0c00 - 0x1d1104
void Set_trajectory_0x1d0c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Set_trajectory_0x1d0c00");
#endif

    switch (ctx->pc) {
        case 0x1d0c3cu: goto label_1d0c3c;
        case 0x1d0c64u: goto label_1d0c64;
        case 0x1d0c7cu: goto label_1d0c7c;
        case 0x1d0c94u: goto label_1d0c94;
        case 0x1d0ca8u: goto label_1d0ca8;
        case 0x1d0cb8u: goto label_1d0cb8;
        case 0x1d0cc8u: goto label_1d0cc8;
        case 0x1d0cd8u: goto label_1d0cd8;
        case 0x1d0d64u: goto label_1d0d64;
        case 0x1d0e08u: goto label_1d0e08;
        case 0x1d0e50u: goto label_1d0e50;
        case 0x1d0e6cu: goto label_1d0e6c;
        case 0x1d0eacu: goto label_1d0eac;
        case 0x1d0ed0u: goto label_1d0ed0;
        case 0x1d0efcu: goto label_1d0efc;
        case 0x1d0f40u: goto label_1d0f40;
        case 0x1d0f64u: goto label_1d0f64;
        case 0x1d0fc4u: goto label_1d0fc4;
        case 0x1d100cu: goto label_1d100c;
        case 0x1d103cu: goto label_1d103c;
        case 0x1d10a0u: goto label_1d10a0;
        default: break;
    }

    ctx->pc = 0x1d0c00u;

    // 0x1d0c00: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x1d0c00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x1d0c04: 0x7fbf0030  sq          $ra, 0x30($sp)
    ctx->pc = 0x1d0c04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x1d0c08: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1d0c08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1d0c0c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d0c0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d0c10: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d0c10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d0c14: 0xafa400b8  sw          $a0, 0xB8($sp)
    ctx->pc = 0x1d0c14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 4));
    // 0x1d0c18: 0xafa500c0  sw          $a1, 0xC0($sp)
    ctx->pc = 0x1d0c18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 5));
    // 0x1d0c1c: 0xe7ac00c8  swc1        $f12, 0xC8($sp)
    ctx->pc = 0x1d0c1cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x1d0c20: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x1d0c20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x1d0c24: 0x2471dbc0  addiu       $s1, $v1, -0x2440
    ctx->pc = 0x1d0c24u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958016));
    // 0x1d0c28: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1d0c28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x1d0c2c: 0x2470b920  addiu       $s0, $v1, -0x46E0
    ctx->pc = 0x1d0c2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949152));
    // 0x1d0c30: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x1d0c30u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d0c34: 0x10000128  b           . + 4 + (0x128 << 2)
    ctx->pc = 0x1D0C34u;
    {
        const bool branch_taken_0x1d0c34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d0c34) {
            ctx->pc = 0x1D10D8u;
            goto label_1d10d8;
        }
    }
    ctx->pc = 0x1D0C3Cu;
label_1d0c3c:
    // 0x1d0c3c: 0x26100070  addiu       $s0, $s0, 0x70
    ctx->pc = 0x1d0c3cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    // 0x1d0c40: 0x92030060  lbu         $v1, 0x60($s0)
    ctx->pc = 0x1d0c40u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1d0c44: 0x14600123  bnez        $v1, . + 4 + (0x123 << 2)
    ctx->pc = 0x1D0C44u;
    {
        const bool branch_taken_0x1d0c44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d0c44) {
            ctx->pc = 0x1D10D4u;
            goto label_1d10d4;
        }
    }
    ctx->pc = 0x1D0C4Cu;
    // 0x1d0c4c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1d0c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1d0c50: 0x8fa500b8  lw          $a1, 0xB8($sp)
    ctx->pc = 0x1d0c50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1d0c54: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1d0c54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1d0c58: 0x24469240  addiu       $a2, $v0, -0x6DC0
    ctx->pc = 0x1d0c58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939200));
    // 0x1d0c5c: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x1D0C5Cu;
    SET_GPR_U32(ctx, 31, 0x1D0C64u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x1D0C64u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1D0C64u) { return; }
    ctx->pc = 0x1D0C64u;
label_1d0c64:
    // 0x1d0c64: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x1d0c64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1d0c68: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1d0c68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1d0c6c: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x1d0c6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1d0c70: 0x24460030  addiu       $a2, $v0, 0x30
    ctx->pc = 0x1d0c70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x1d0c74: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x1D0C74u;
    SET_GPR_U32(ctx, 31, 0x1D0C7Cu);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x1D0C74u, 0x1D0C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0C7Cu;
label_1d0c7c:
    // 0x1d0c7c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1d0c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1d0c80: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1d0c80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1d0c84: 0x24459250  addiu       $a1, $v0, -0x6DB0
    ctx->pc = 0x1d0c84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939216));
    // 0x1d0c88: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x1d0c88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1d0c8c: 0xc040c12  jal         func_103048
    ctx->pc = 0x1D0C8Cu;
    SET_GPR_U32(ctx, 31, 0x1D0C94u);
    ctx->pc = 0x103048u;
    {
        ctx->pc = 0x1D0C94u;
        ps2_stubs::sceVu0OuterProduct(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1D0C94u) { return; }
    ctx->pc = 0x1D0C94u;
label_1d0c94:
    // 0x1d0c94: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1d0c94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1d0c98: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x1d0c98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1d0c9c: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x1d0c9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1d0ca0: 0xc040c12  jal         func_103048
    ctx->pc = 0x1D0CA0u;
    SET_GPR_U32(ctx, 31, 0x1D0CA8u);
    ctx->pc = 0x103048u;
    {
        ctx->pc = 0x1D0CA8u;
        ps2_stubs::sceVu0OuterProduct(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1D0CA8u) { return; }
    ctx->pc = 0x1D0CA8u;
label_1d0ca8:
    // 0x1d0ca8: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1d0ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1d0cac: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x1d0cacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1d0cb0: 0xc040c24  jal         func_103090
    ctx->pc = 0x1D0CB0u;
    SET_GPR_U32(ctx, 31, 0x1D0CB8u);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x1D0CB8u;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1D0CB8u) { return; }
    ctx->pc = 0x1D0CB8u;
label_1d0cb8:
    // 0x1d0cb8: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1d0cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1d0cbc: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x1d0cbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1d0cc0: 0xc040c24  jal         func_103090
    ctx->pc = 0x1D0CC0u;
    SET_GPR_U32(ctx, 31, 0x1D0CC8u);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x1D0CC8u;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1D0CC8u) { return; }
    ctx->pc = 0x1D0CC8u;
label_1d0cc8:
    // 0x1d0cc8: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1d0cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1d0ccc: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x1d0cccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1d0cd0: 0xc040c24  jal         func_103090
    ctx->pc = 0x1D0CD0u;
    SET_GPR_U32(ctx, 31, 0x1D0CD8u);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x1D0CD8u;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1D0CD8u) { return; }
    ctx->pc = 0x1D0CD8u;
label_1d0cd8:
    // 0x1d0cd8: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x1d0cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1d0cdc: 0x24630030  addiu       $v1, $v1, 0x30
    ctx->pc = 0x1d0cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x1d0ce0: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x1d0ce0u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d0ce4: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x1d0ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1d0ce8: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x1d0ce8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x1d0cec: 0xae000064  sw          $zero, 0x64($s0)
    ctx->pc = 0x1d0cecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 0));
    // 0x1d0cf0: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x1d0cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1d0cf4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1d0cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1d0cf8: 0x108300de  beq         $a0, $v1, . + 4 + (0xDE << 2)
    ctx->pc = 0x1D0CF8u;
    {
        const bool branch_taken_0x1d0cf8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1d0cf8) {
            ctx->pc = 0x1D1074u;
            goto label_1d1074;
        }
    }
    ctx->pc = 0x1D0D00u;
    // 0x1d0d00: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1d0d00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1d0d04: 0x1083008b  beq         $a0, $v1, . + 4 + (0x8B << 2)
    ctx->pc = 0x1D0D04u;
    {
        const bool branch_taken_0x1d0d04 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1d0d04) {
            ctx->pc = 0x1D0F34u;
            goto label_1d0f34;
        }
    }
    ctx->pc = 0x1D0D0Cu;
    // 0x1d0d0c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1d0d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d0d10: 0x10830063  beq         $a0, $v1, . + 4 + (0x63 << 2)
    ctx->pc = 0x1D0D10u;
    {
        const bool branch_taken_0x1d0d10 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1d0d10) {
            ctx->pc = 0x1D0EA0u;
            goto label_1d0ea0;
        }
    }
    ctx->pc = 0x1D0D18u;
    // 0x1d0d18: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x1d0d18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1d0d1c: 0x1083001e  beq         $a0, $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x1D0D1Cu;
    {
        const bool branch_taken_0x1d0d1c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1d0d1c) {
            ctx->pc = 0x1D0D98u;
            goto label_1d0d98;
        }
    }
    ctx->pc = 0x1D0D24u;
    // 0x1d0d24: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d0d24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d0d28: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D0D28u;
    {
        const bool branch_taken_0x1d0d28 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1d0d28) {
            ctx->pc = 0x1D0D38u;
            goto label_1d0d38;
        }
    }
    ctx->pc = 0x1D0D30u;
    // 0x1d0d30: 0x100000ed  b           . + 4 + (0xED << 2)
    ctx->pc = 0x1D0D30u;
    {
        const bool branch_taken_0x1d0d30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d0d30) {
            ctx->pc = 0x1D10E8u;
            goto label_1d10e8;
        }
    }
    ctx->pc = 0x1D0D38u;
label_1d0d38:
    // 0x1d0d38: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d0d38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d0d3c: 0xa2020060  sb          $v0, 0x60($s0)
    ctx->pc = 0x1d0d3cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 96), (uint8_t)GPR_U32(ctx, 2));
    // 0x1d0d40: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1d0d40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1d0d44: 0xae02005c  sw          $v0, 0x5C($s0)
    ctx->pc = 0x1d0d44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 2));
    // 0x1d0d48: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x1d0d48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d0d4c: 0xe6000050  swc1        $f0, 0x50($s0)
    ctx->pc = 0x1d0d4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x1d0d50: 0xa6000062  sh          $zero, 0x62($s0)
    ctx->pc = 0x1d0d50u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 98), (uint16_t)GPR_U32(ctx, 0));
    // 0x1d0d54: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1d0d54u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1d0d58: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x1d0d58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1d0d5c: 0xc040ca2  jal         func_103288
    ctx->pc = 0x1D0D5Cu;
    SET_GPR_U32(ctx, 31, 0x1D0D64u);
    ctx->pc = 0x103288u;
    {
        ctx->pc = 0x1D0D64u;
        ps2_stubs::sceVu0CopyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1D0D64u) { return; }
    ctx->pc = 0x1D0D64u;
label_1d0d64:
    // 0x1d0d64: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x1d0d64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1d0d68: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x1d0d68u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d0d6c: 0x26030040  addiu       $v1, $s0, 0x40
    ctx->pc = 0x1d0d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x1d0d70: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x1d0d70u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x1d0d74: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d0d74u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d0d78: 0x0  nop
    ctx->pc = 0x1d0d78u;
    // NOP
    // 0x1d0d7c: 0xe6000054  swc1        $f0, 0x54($s0)
    ctx->pc = 0x1d0d7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x1d0d80: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x1d0d80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d0d84: 0xe6000058  swc1        $f0, 0x58($s0)
    ctx->pc = 0x1d0d84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x1d0d88: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d0d88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d0d8c: 0xa2030061  sb          $v1, 0x61($s0)
    ctx->pc = 0x1d0d8cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 97), (uint8_t)GPR_U32(ctx, 3));
    // 0x1d0d90: 0x100000d5  b           . + 4 + (0xD5 << 2)
    ctx->pc = 0x1D0D90u;
    {
        const bool branch_taken_0x1d0d90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d0d90) {
            ctx->pc = 0x1D10E8u;
            goto label_1d10e8;
        }
    }
    ctx->pc = 0x1D0D98u;
label_1d0d98:
    // 0x1d0d98: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d0d98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d0d9c: 0xa2020060  sb          $v0, 0x60($s0)
    ctx->pc = 0x1d0d9cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 96), (uint8_t)GPR_U32(ctx, 2));
    // 0x1d0da0: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1d0da0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1d0da4: 0xae02005c  sw          $v0, 0x5C($s0)
    ctx->pc = 0x1d0da4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 2));
    // 0x1d0da8: 0x922213a6  lbu         $v0, 0x13A6($s1)
    ctx->pc = 0x1d0da8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 5030)));
    // 0x1d0dac: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1d0dacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1d0db0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1d0db0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1d0db4: 0x1062001d  beq         $v1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1D0DB4u;
    {
        const bool branch_taken_0x1d0db4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d0db4) {
            ctx->pc = 0x1D0E2Cu;
            goto label_1d0e2c;
        }
    }
    ctx->pc = 0x1D0DBCu;
    // 0x1d0dbc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d0dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d0dc0: 0x1062001a  beq         $v1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1D0DC0u;
    {
        const bool branch_taken_0x1d0dc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d0dc0) {
            ctx->pc = 0x1D0E2Cu;
            goto label_1d0e2c;
        }
    }
    ctx->pc = 0x1D0DC8u;
    // 0x1d0dc8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1d0dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d0dcc: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D0DCCu;
    {
        const bool branch_taken_0x1d0dcc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d0dcc) {
            ctx->pc = 0x1D0DE4u;
            goto label_1d0de4;
        }
    }
    ctx->pc = 0x1D0DD4u;
    // 0x1d0dd4: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D0DD4u;
    {
        const bool branch_taken_0x1d0dd4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d0dd4) {
            ctx->pc = 0x1D0DE4u;
            goto label_1d0de4;
        }
    }
    ctx->pc = 0x1D0DDCu;
    // 0x1d0ddc: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x1D0DDCu;
    {
        const bool branch_taken_0x1d0ddc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d0ddc) {
            ctx->pc = 0x1D0DE4u;
            goto label_1d0de4;
        }
    }
    ctx->pc = 0x1D0DE4u;
label_1d0de4:
    // 0x1d0de4: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x1d0de4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x1d0de8: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x1d0de8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x1d0dec: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d0decu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d0df0: 0x8e220130  lw          $v0, 0x130($s1)
    ctx->pc = 0x1d0df0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 304)));
    // 0x1d0df4: 0x2404030d  addiu       $a0, $zero, 0x30D
    ctx->pc = 0x1d0df4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 781));
    // 0x1d0df8: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x1d0df8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x1d0dfc: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1d0dfcu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d0e00: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x1D0E00u;
    SET_GPR_U32(ctx, 31, 0x1D0E08u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x1D0E00u, 0x1D0E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0E08u;
label_1d0e08:
    // 0x1d0e08: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x1d0e08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x1d0e0c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d0e0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d0e10: 0x0  nop
    ctx->pc = 0x1d0e10u;
    // NOP
    // 0x1d0e14: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x1d0e14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x1d0e18: 0x92020060  lbu         $v0, 0x60($s0)
    ctx->pc = 0x1d0e18u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1d0e1c: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x1d0e1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x1d0e20: 0xa2020060  sb          $v0, 0x60($s0)
    ctx->pc = 0x1d0e20u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 96), (uint8_t)GPR_U32(ctx, 2));
    // 0x1d0e24: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1D0E24u;
    {
        const bool branch_taken_0x1d0e24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d0e24) {
            ctx->pc = 0x1D0E50u;
            goto label_1d0e50;
        }
    }
    ctx->pc = 0x1D0E2Cu;
label_1d0e2c:
    // 0x1d0e2c: 0x8e230130  lw          $v1, 0x130($s1)
    ctx->pc = 0x1d0e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 304)));
    // 0x1d0e30: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x1d0e30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x1d0e34: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x1d0e34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x1d0e38: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d0e38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d0e3c: 0x2404030d  addiu       $a0, $zero, 0x30D
    ctx->pc = 0x1d0e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 781));
    // 0x1d0e40: 0x24650030  addiu       $a1, $v1, 0x30
    ctx->pc = 0x1d0e40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x1d0e44: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1d0e44u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d0e48: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x1D0E48u;
    SET_GPR_U32(ctx, 31, 0x1D0E50u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x1D0E48u, 0x1D0E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0E50u;
label_1d0e50:
    // 0x1d0e50: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x1d0e50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d0e54: 0xe6000050  swc1        $f0, 0x50($s0)
    ctx->pc = 0x1d0e54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x1d0e58: 0xa6000062  sh          $zero, 0x62($s0)
    ctx->pc = 0x1d0e58u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 98), (uint16_t)GPR_U32(ctx, 0));
    // 0x1d0e5c: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1d0e5cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1d0e60: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x1d0e60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1d0e64: 0xc040ca2  jal         func_103288
    ctx->pc = 0x1D0E64u;
    SET_GPR_U32(ctx, 31, 0x1D0E6Cu);
    ctx->pc = 0x103288u;
    {
        ctx->pc = 0x1D0E6Cu;
        ps2_stubs::sceVu0CopyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1D0E6Cu) { return; }
    ctx->pc = 0x1D0E6Cu;
label_1d0e6c:
    // 0x1d0e6c: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x1d0e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1d0e70: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x1d0e70u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d0e74: 0x26030040  addiu       $v1, $s0, 0x40
    ctx->pc = 0x1d0e74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x1d0e78: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x1d0e78u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x1d0e7c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d0e7cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d0e80: 0x0  nop
    ctx->pc = 0x1d0e80u;
    // NOP
    // 0x1d0e84: 0xe6000054  swc1        $f0, 0x54($s0)
    ctx->pc = 0x1d0e84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x1d0e88: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x1d0e88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d0e8c: 0xe6000058  swc1        $f0, 0x58($s0)
    ctx->pc = 0x1d0e8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x1d0e90: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d0e90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d0e94: 0xa2030061  sb          $v1, 0x61($s0)
    ctx->pc = 0x1d0e94u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 97), (uint8_t)GPR_U32(ctx, 3));
    // 0x1d0e98: 0x10000093  b           . + 4 + (0x93 << 2)
    ctx->pc = 0x1D0E98u;
    {
        const bool branch_taken_0x1d0e98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d0e98) {
            ctx->pc = 0x1D10E8u;
            goto label_1d10e8;
        }
    }
    ctx->pc = 0x1D0EA0u;
label_1d0ea0:
    // 0x1d0ea0: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1d0ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1d0ea4: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x1D0EA4u;
    SET_GPR_U32(ctx, 31, 0x1D0EACu);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x1D0EA4u, 0x1D0EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0EACu;
label_1d0eac:
    // 0x1d0eac: 0x3c02c37a  lui         $v0, 0xC37A
    ctx->pc = 0x1d0eacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50042 << 16));
    // 0x1d0eb0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d0eb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d0eb4: 0x0  nop
    ctx->pc = 0x1d0eb4u;
    // NOP
    // 0x1d0eb8: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x1d0eb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1d0ebc: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1d0ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1d0ec0: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x1d0ec0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1d0ec4: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x1d0ec4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1d0ec8: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x1D0EC8u;
    SET_GPR_U32(ctx, 31, 0x1D0ED0u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x1D0ED0u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1D0ED0u) { return; }
    ctx->pc = 0x1D0ED0u;
label_1d0ed0:
    // 0x1d0ed0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d0ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d0ed4: 0xa2020060  sb          $v0, 0x60($s0)
    ctx->pc = 0x1d0ed4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 96), (uint8_t)GPR_U32(ctx, 2));
    // 0x1d0ed8: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x1d0ed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d0edc: 0xe6000050  swc1        $f0, 0x50($s0)
    ctx->pc = 0x1d0edcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x1d0ee0: 0xa6000062  sh          $zero, 0x62($s0)
    ctx->pc = 0x1d0ee0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 98), (uint16_t)GPR_U32(ctx, 0));
    // 0x1d0ee4: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1d0ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1d0ee8: 0xae02005c  sw          $v0, 0x5C($s0)
    ctx->pc = 0x1d0ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 2));
    // 0x1d0eec: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1d0eecu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1d0ef0: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x1d0ef0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1d0ef4: 0xc040ca2  jal         func_103288
    ctx->pc = 0x1D0EF4u;
    SET_GPR_U32(ctx, 31, 0x1D0EFCu);
    ctx->pc = 0x103288u;
    {
        ctx->pc = 0x1D0EFCu;
        ps2_stubs::sceVu0CopyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1D0EFCu) { return; }
    ctx->pc = 0x1D0EFCu;
label_1d0efc:
    // 0x1d0efc: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x1d0efcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1d0f00: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x1d0f00u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d0f04: 0x26030040  addiu       $v1, $s0, 0x40
    ctx->pc = 0x1d0f04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x1d0f08: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x1d0f08u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x1d0f0c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d0f0cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d0f10: 0x0  nop
    ctx->pc = 0x1d0f10u;
    // NOP
    // 0x1d0f14: 0xe6000054  swc1        $f0, 0x54($s0)
    ctx->pc = 0x1d0f14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x1d0f18: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d0f18u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d0f1c: 0x0  nop
    ctx->pc = 0x1d0f1cu;
    // NOP
    // 0x1d0f20: 0xe6000058  swc1        $f0, 0x58($s0)
    ctx->pc = 0x1d0f20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x1d0f24: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1d0f24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1d0f28: 0xa2030061  sb          $v1, 0x61($s0)
    ctx->pc = 0x1d0f28u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 97), (uint8_t)GPR_U32(ctx, 3));
    // 0x1d0f2c: 0x1000006e  b           . + 4 + (0x6E << 2)
    ctx->pc = 0x1D0F2Cu;
    {
        const bool branch_taken_0x1d0f2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d0f2c) {
            ctx->pc = 0x1D10E8u;
            goto label_1d10e8;
        }
    }
    ctx->pc = 0x1D0F34u;
label_1d0f34:
    // 0x1d0f34: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1d0f34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1d0f38: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x1D0F38u;
    SET_GPR_U32(ctx, 31, 0x1D0F40u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x1D0F38u, 0x1D0F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0F40u;
label_1d0f40:
    // 0x1d0f40: 0x3c02c37a  lui         $v0, 0xC37A
    ctx->pc = 0x1d0f40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50042 << 16));
    // 0x1d0f44: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d0f44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d0f48: 0x0  nop
    ctx->pc = 0x1d0f48u;
    // NOP
    // 0x1d0f4c: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x1d0f4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1d0f50: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1d0f50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1d0f54: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x1d0f54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1d0f58: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x1d0f58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1d0f5c: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x1D0F5Cu;
    SET_GPR_U32(ctx, 31, 0x1D0F64u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x1D0F64u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1D0F64u) { return; }
    ctx->pc = 0x1D0F64u;
label_1d0f64:
    // 0x1d0f64: 0x922213a6  lbu         $v0, 0x13A6($s1)
    ctx->pc = 0x1d0f64u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 5030)));
    // 0x1d0f68: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1d0f68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1d0f6c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1d0f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1d0f70: 0x1062001d  beq         $v1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1D0F70u;
    {
        const bool branch_taken_0x1d0f70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d0f70) {
            ctx->pc = 0x1D0FE8u;
            goto label_1d0fe8;
        }
    }
    ctx->pc = 0x1D0F78u;
    // 0x1d0f78: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d0f78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d0f7c: 0x1062001a  beq         $v1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1D0F7Cu;
    {
        const bool branch_taken_0x1d0f7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d0f7c) {
            ctx->pc = 0x1D0FE8u;
            goto label_1d0fe8;
        }
    }
    ctx->pc = 0x1D0F84u;
    // 0x1d0f84: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1d0f84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d0f88: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D0F88u;
    {
        const bool branch_taken_0x1d0f88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d0f88) {
            ctx->pc = 0x1D0FA0u;
            goto label_1d0fa0;
        }
    }
    ctx->pc = 0x1D0F90u;
    // 0x1d0f90: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D0F90u;
    {
        const bool branch_taken_0x1d0f90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d0f90) {
            ctx->pc = 0x1D0FA0u;
            goto label_1d0fa0;
        }
    }
    ctx->pc = 0x1D0F98u;
    // 0x1d0f98: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x1D0F98u;
    {
        const bool branch_taken_0x1d0f98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d0f98) {
            ctx->pc = 0x1D0FA0u;
            goto label_1d0fa0;
        }
    }
    ctx->pc = 0x1D0FA0u;
label_1d0fa0:
    // 0x1d0fa0: 0x8e230130  lw          $v1, 0x130($s1)
    ctx->pc = 0x1d0fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 304)));
    // 0x1d0fa4: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x1d0fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x1d0fa8: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x1d0fa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x1d0fac: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d0facu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d0fb0: 0x2404030d  addiu       $a0, $zero, 0x30D
    ctx->pc = 0x1d0fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 781));
    // 0x1d0fb4: 0x24650030  addiu       $a1, $v1, 0x30
    ctx->pc = 0x1d0fb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x1d0fb8: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1d0fb8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d0fbc: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x1D0FBCu;
    SET_GPR_U32(ctx, 31, 0x1D0FC4u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x1D0FBCu, 0x1D0FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0FC4u;
label_1d0fc4:
    // 0x1d0fc4: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x1d0fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x1d0fc8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d0fc8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d0fcc: 0x0  nop
    ctx->pc = 0x1d0fccu;
    // NOP
    // 0x1d0fd0: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x1d0fd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x1d0fd4: 0x92020060  lbu         $v0, 0x60($s0)
    ctx->pc = 0x1d0fd4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1d0fd8: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x1d0fd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x1d0fdc: 0xa2020060  sb          $v0, 0x60($s0)
    ctx->pc = 0x1d0fdcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 96), (uint8_t)GPR_U32(ctx, 2));
    // 0x1d0fe0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1D0FE0u;
    {
        const bool branch_taken_0x1d0fe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d0fe0) {
            ctx->pc = 0x1D1010u;
            goto label_1d1010;
        }
    }
    ctx->pc = 0x1D0FE8u;
label_1d0fe8:
    // 0x1d0fe8: 0x8e230130  lw          $v1, 0x130($s1)
    ctx->pc = 0x1d0fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 304)));
    // 0x1d0fec: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x1d0fecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x1d0ff0: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x1d0ff0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x1d0ff4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d0ff4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d0ff8: 0x2404030d  addiu       $a0, $zero, 0x30D
    ctx->pc = 0x1d0ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 781));
    // 0x1d0ffc: 0x24650030  addiu       $a1, $v1, 0x30
    ctx->pc = 0x1d0ffcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x1d1000: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1d1000u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d1004: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x1D1004u;
    SET_GPR_U32(ctx, 31, 0x1D100Cu);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x1D1004u, 0x1D100Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D100Cu;
label_1d100c:
    // 0x1d100c: 0x0  nop
    ctx->pc = 0x1d100cu;
    // NOP
label_1d1010:
    // 0x1d1010: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d1010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d1014: 0xa2020060  sb          $v0, 0x60($s0)
    ctx->pc = 0x1d1014u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 96), (uint8_t)GPR_U32(ctx, 2));
    // 0x1d1018: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x1d1018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d101c: 0xe6000050  swc1        $f0, 0x50($s0)
    ctx->pc = 0x1d101cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x1d1020: 0xa6000062  sh          $zero, 0x62($s0)
    ctx->pc = 0x1d1020u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 98), (uint16_t)GPR_U32(ctx, 0));
    // 0x1d1024: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1d1024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1d1028: 0xae02005c  sw          $v0, 0x5C($s0)
    ctx->pc = 0x1d1028u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 2));
    // 0x1d102c: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1d102cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1d1030: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x1d1030u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1d1034: 0xc040ca2  jal         func_103288
    ctx->pc = 0x1D1034u;
    SET_GPR_U32(ctx, 31, 0x1D103Cu);
    ctx->pc = 0x103288u;
    {
        ctx->pc = 0x1D103Cu;
        ps2_stubs::sceVu0CopyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1D103Cu) { return; }
    ctx->pc = 0x1D103Cu;
label_1d103c:
    // 0x1d103c: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x1d103cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1d1040: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x1d1040u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d1044: 0x26030040  addiu       $v1, $s0, 0x40
    ctx->pc = 0x1d1044u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x1d1048: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x1d1048u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x1d104c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d104cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d1050: 0x0  nop
    ctx->pc = 0x1d1050u;
    // NOP
    // 0x1d1054: 0xe6000054  swc1        $f0, 0x54($s0)
    ctx->pc = 0x1d1054u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x1d1058: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d1058u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d105c: 0x0  nop
    ctx->pc = 0x1d105cu;
    // NOP
    // 0x1d1060: 0xe6000058  swc1        $f0, 0x58($s0)
    ctx->pc = 0x1d1060u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x1d1064: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1d1064u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1d1068: 0xa2030061  sb          $v1, 0x61($s0)
    ctx->pc = 0x1d1068u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 97), (uint8_t)GPR_U32(ctx, 3));
    // 0x1d106c: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x1D106Cu;
    {
        const bool branch_taken_0x1d106c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d106c) {
            ctx->pc = 0x1D10E8u;
            goto label_1d10e8;
        }
    }
    ctx->pc = 0x1D1074u;
label_1d1074:
    // 0x1d1074: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d1074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d1078: 0xa2020060  sb          $v0, 0x60($s0)
    ctx->pc = 0x1d1078u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 96), (uint8_t)GPR_U32(ctx, 2));
    // 0x1d107c: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x1d107cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d1080: 0xe6000050  swc1        $f0, 0x50($s0)
    ctx->pc = 0x1d1080u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x1d1084: 0xa6000062  sh          $zero, 0x62($s0)
    ctx->pc = 0x1d1084u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 98), (uint16_t)GPR_U32(ctx, 0));
    // 0x1d1088: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1d1088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1d108c: 0xae02005c  sw          $v0, 0x5C($s0)
    ctx->pc = 0x1d108cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 2));
    // 0x1d1090: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1d1090u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1d1094: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x1d1094u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1d1098: 0xc040ca2  jal         func_103288
    ctx->pc = 0x1D1098u;
    SET_GPR_U32(ctx, 31, 0x1D10A0u);
    ctx->pc = 0x103288u;
    {
        ctx->pc = 0x1D10A0u;
        ps2_stubs::sceVu0CopyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1D10A0u) { return; }
    ctx->pc = 0x1D10A0u;
label_1d10a0:
    // 0x1d10a0: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x1d10a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1d10a4: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x1d10a4u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d10a8: 0x26030040  addiu       $v1, $s0, 0x40
    ctx->pc = 0x1d10a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x1d10ac: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x1d10acu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x1d10b0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d10b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d10b4: 0x0  nop
    ctx->pc = 0x1d10b4u;
    // NOP
    // 0x1d10b8: 0xe6000054  swc1        $f0, 0x54($s0)
    ctx->pc = 0x1d10b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x1d10bc: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x1d10bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d10c0: 0xe6000058  swc1        $f0, 0x58($s0)
    ctx->pc = 0x1d10c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x1d10c4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d10c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d10c8: 0xa2030061  sb          $v1, 0x61($s0)
    ctx->pc = 0x1d10c8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 97), (uint8_t)GPR_U32(ctx, 3));
    // 0x1d10cc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1D10CCu;
    {
        const bool branch_taken_0x1d10cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d10cc) {
            ctx->pc = 0x1D10E8u;
            goto label_1d10e8;
        }
    }
    ctx->pc = 0x1D10D4u;
label_1d10d4:
    // 0x1d10d4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1d10d4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1d10d8:
    // 0x1d10d8: 0x2e430010  sltiu       $v1, $s2, 0x10
    ctx->pc = 0x1d10d8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x1d10dc: 0x1460fed7  bnez        $v1, . + 4 + (-0x129 << 2)
    ctx->pc = 0x1D10DCu;
    {
        const bool branch_taken_0x1d10dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d10dc) {
            ctx->pc = 0x1D0C3Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d0c3c;
        }
    }
    ctx->pc = 0x1D10E4u;
    // 0x1d10e4: 0x0  nop
    ctx->pc = 0x1d10e4u;
    // NOP
label_1d10e8:
    // 0x1d10e8: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x1d10e8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d10ec: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1d10ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d10f0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d10f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d10f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d10f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d10f8: 0x27bd00d0  addiu       $sp, $sp, 0xD0
    ctx->pc = 0x1d10f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1d10fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1D10FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D10FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D1104u;
}
