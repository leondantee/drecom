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

// Function: entry_00236d10
// Address: 0x236d10 - 0x236e00
void entry_00236d10_0x236d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00236d10_0x236d10");
#endif

    switch (ctx->pc) {
        case 0x236d60u: goto label_236d60;
        case 0x236d94u: goto label_236d94;
        default: break;
    }

    ctx->pc = 0x236d10u;

label_236d10:
    // 0x236d10: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x236d10u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x236d14: 0x78540010  lq          $s4, 0x10($v0)
    ctx->pc = 0x236d14u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x236d18: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x236d18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x236d1c: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x236d1cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x236d20: 0x7d030000  sq          $v1, 0x0($t0)
    ctx->pc = 0x236d20u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 3));
    // 0x236d24: 0x7d140010  sq          $s4, 0x10($t0)
    ctx->pc = 0x236d24u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 16), GPR_VEC(ctx, 20));
    // 0x236d28: 0x25080020  addiu       $t0, $t0, 0x20
    ctx->pc = 0x236d28u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
    // 0x236d2c: 0x1d20fff8  bgtz        $t1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x236D2Cu;
    {
        const bool branch_taken_0x236d2c = (GPR_S32(ctx, 9) > 0);
        if (branch_taken_0x236d2c) {
            ctx->pc = 0x236D10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_236d10;
        }
    }
    ctx->pc = 0x236D34u;
    // 0x236d34: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x236d34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x236d38: 0xe5020000  swc1        $f2, 0x0($t0)
    ctx->pc = 0x236d38u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x236d3c: 0x8fa202e8  lw          $v0, 0x2E8($sp)
    ctx->pc = 0x236d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 744)));
    // 0x236d40: 0x8fa402e8  lw          $a0, 0x2E8($sp)
    ctx->pc = 0x236d40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 744)));
    // 0x236d44: 0x90831308  lbu         $v1, 0x1308($a0)
    ctx->pc = 0x236d44u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4872)));
    // 0x236d48: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x236d48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x236d4c: 0x30660080  andi        $a2, $v1, 0x80
    ctx->pc = 0x236d4cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x236d50: 0x2444028c  addiu       $a0, $v0, 0x28C
    ctx->pc = 0x236d50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 652));
    // 0x236d54: 0x24050a40  addiu       $a1, $zero, 0xA40
    ctx->pc = 0x236d54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2624));
    // 0x236d58: 0xc06b118  jal         func_1AC460
    ctx->pc = 0x236D58u;
    SET_GPR_U32(ctx, 31, 0x236D60u);
    ctx->pc = 0x1AC460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC460u, 0x236D58u, 0x236D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236D60u;
label_236d60:
    // 0x236d60: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x236d60u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x236d64: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x236d64u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x236d68: 0x26050a40  addiu       $a1, $s0, 0xA40
    ctx->pc = 0x236d68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 2624));
    // 0x236d6c: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x236d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x236d70: 0x34430002  ori         $v1, $v0, 0x2
    ctx->pc = 0x236d70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x236d74: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x236d74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x236d78: 0x3c022402  lui         $v0, 0x2402
    ctx->pc = 0x236d78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9218 << 16));
    // 0x236d7c: 0x34421400  ori         $v0, $v0, 0x1400
    ctx->pc = 0x236d7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5120);
    // 0x236d80: 0x433025  or          $a2, $v0, $v1
    ctx->pc = 0x236d80u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x236d84: 0x27a70180  addiu       $a3, $sp, 0x180
    ctx->pc = 0x236d84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x236d88: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x236d88u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x236d8c: 0xc0754a4  jal         func_1D5290
    ctx->pc = 0x236D8Cu;
    SET_GPR_U32(ctx, 31, 0x236D94u);
    ctx->pc = 0x1D5290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5290u, 0x236D8Cu, 0x236D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236D94u;
label_236d94:
    // 0x236d94: 0x8fa702e8  lw          $a3, 0x2E8($sp)
    ctx->pc = 0x236d94u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 744)));
    // 0x236d98: 0x8cf0028c  lw          $s0, 0x28C($a3)
    ctx->pc = 0x236d98u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 652)));
    // 0x236d9c: 0x3c123126  lui         $s2, 0x3126
    ctx->pc = 0x236d9cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)12582 << 16));
    // 0x236da0: 0x36484000  ori         $t0, $s2, 0x4000
    ctx->pc = 0x236da0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)16384);
    // 0x236da4: 0x8103c  dsll32      $v0, $t0, 0
    ctx->pc = 0x236da4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) << (32 + 0));
    // 0x236da8: 0x34038028  ori         $v1, $zero, 0x8028
    ctx->pc = 0x236da8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32808);
    // 0x236dac: 0x628825  or          $s1, $v1, $v0
    ctx->pc = 0x236dacu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x236db0: 0xfe110070  sd          $s1, 0x70($s0)
    ctx->pc = 0x236db0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 112), GPR_U64(ctx, 17));
    // 0x236db4: 0x3c030005  lui         $v1, 0x5
    ctx->pc = 0x236db4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)5 << 16));
    // 0x236db8: 0x34623000  ori         $v0, $v1, 0x3000
    ctx->pc = 0x236db8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)12288);
    // 0x236dbc: 0xfe020030  sd          $v0, 0x30($s0)
    ctx->pc = 0x236dbcu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 48), GPR_U64(ctx, 2));
    // 0x236dc0: 0x8fa202e8  lw          $v0, 0x2E8($sp)
    ctx->pc = 0x236dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 744)));
    // 0x236dc4: 0x8c500290  lw          $s0, 0x290($v0)
    ctx->pc = 0x236dc4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 656)));
    // 0x236dc8: 0x3c023126  lui         $v0, 0x3126
    ctx->pc = 0x236dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12582 << 16));
    // 0x236dcc: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x236dccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x236dd0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x236dd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x236dd4: 0x34038028  ori         $v1, $zero, 0x8028
    ctx->pc = 0x236dd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32808);
    // 0x236dd8: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x236dd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x236ddc: 0xfe020070  sd          $v0, 0x70($s0)
    ctx->pc = 0x236ddcu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 112), GPR_U64(ctx, 2));
    // 0x236de0: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x236de0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x236de4: 0x34463000  ori         $a2, $v0, 0x3000
    ctx->pc = 0x236de4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12288);
    // 0x236de8: 0xfe060030  sd          $a2, 0x30($s0)
    ctx->pc = 0x236de8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 48), GPR_U64(ctx, 6));
    // 0x236dec: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x236decu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x236df0: 0x2447b100  addiu       $a3, $v0, -0x4F00
    ctx->pc = 0x236df0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947072));
    // 0x236df4: 0x27a301f0  addiu       $v1, $sp, 0x1F0
    ctx->pc = 0x236df4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
    // 0x236df8: 0x24090003  addiu       $t1, $zero, 0x3
    ctx->pc = 0x236df8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x236dfc: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x236dfcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    ctx->pc = 0x236e00u;
}
