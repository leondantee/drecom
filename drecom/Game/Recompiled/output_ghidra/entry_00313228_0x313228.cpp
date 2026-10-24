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

// Function: entry_00313228
// Address: 0x313228 - 0x31330c
void entry_00313228_0x313228(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00313228_0x313228");
#endif

    switch (ctx->pc) {
        case 0x313248u: goto label_313248;
        default: break;
    }

    ctx->pc = 0x313228u;

    // 0x313228: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x313228u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x31322c: 0x8422f1ac  lh          $v0, -0xE54($at)
    ctx->pc = 0x31322cu;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x3EF1ACu));
    // 0x313230: 0x2442001e  addiu       $v0, $v0, 0x1E
    ctx->pc = 0x313230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30));
    // 0x313234: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x313234u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x313238: 0xa422f1ac  sh          $v0, -0xE54($at)
    ctx->pc = 0x313238u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3EF1ACu, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x3EF1ACu, _value); } while (0);
    // 0x31323c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x31323cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x313240: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x313240u;
    SET_GPR_U32(ctx, 31, 0x313248u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x313240u, 0x313248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313248u;
label_313248:
    // 0x313248: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x313248u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x31324c: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x31324cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x313250: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x313250u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x313254: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x313254u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x313258: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x313258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x31325c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x31325cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x313260: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x313260u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x313264: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x313264u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x313268: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x313268u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x31326c: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x31326cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x313270: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x313270u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x313274: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x313274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x313278: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x313278u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x31327c: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x31327cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x313280: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x313280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x313284: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x313284u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x313288: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x313288u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x31328c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x31328cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x313290: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x313290u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x313294: 0x14400024  bnez        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x313294u;
    {
        const bool branch_taken_0x313294 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x313294) {
            ctx->pc = 0x313328u;
            return;
        }
    }
    ctx->pc = 0x31329Cu;
    // 0x31329c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x31329cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x3132a0: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x3132a0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x3132a4: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x3132a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3132a8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x3132a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3132ac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3132acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3132b0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3132b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3132b4: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x3132b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x3132b8: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x3132b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x3132bc: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x3132bcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x3132c0: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x3132c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3132c4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x3132c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3132c8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3132c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3132cc: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x3132ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x3132d0: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x3132d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x3132d4: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x3132d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x3132d8: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x3132d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x3132dc: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x3132dcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x3132e0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3132e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3132e4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3132e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3132e8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3132E8u;
    {
        const bool branch_taken_0x3132e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3132e8) {
            ctx->pc = 0x31330Cu;
            return;
        }
    }
    ctx->pc = 0x3132F0u;
    // 0x3132f0: 0x24100008  addiu       $s0, $zero, 0x8
    ctx->pc = 0x3132f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3132f4: 0x3c02428c  lui         $v0, 0x428C
    ctx->pc = 0x3132f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17036 << 16));
    // 0x3132f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3132f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3132fc: 0x0  nop
    ctx->pc = 0x3132fcu;
    // NOP
    // 0x313300: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x313300u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x313304: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x313304u;
    {
        const bool branch_taken_0x313304 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x313304) {
            ctx->pc = 0x3133ACu;
            return;
        }
    }
    ctx->pc = 0x31330Cu;
}
