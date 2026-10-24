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

// Function: entry_002d0190
// Address: 0x2d0190 - 0x2d02c4
void entry_002d0190_0x2d0190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d0190_0x2d0190");
#endif

    switch (ctx->pc) {
        case 0x2d01bcu: goto label_2d01bc;
        case 0x2d0230u: goto label_2d0230;
        case 0x2d02bcu: goto label_2d02bc;
        default: break;
    }

    ctx->pc = 0x2d0190u;

    // 0x2d0190: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2d0190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d0194: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x2d0194u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2d0198: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2d0198u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2d019c: 0x24428480  addiu       $v0, $v0, -0x7B80
    ctx->pc = 0x2d019cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935680));
    // 0x2d01a0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d01a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d01a4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2d01a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d01a8: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x2d01a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2d01ac: 0x14620045  bne         $v1, $v0, . + 4 + (0x45 << 2)
    ctx->pc = 0x2D01ACu;
    {
        const bool branch_taken_0x2d01ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2d01ac) {
            ctx->pc = 0x2D02C4u;
            return;
        }
    }
    ctx->pc = 0x2D01B4u;
    // 0x2d01b4: 0xc06766c  jal         func_19D9B0
    ctx->pc = 0x2D01B4u;
    SET_GPR_U32(ctx, 31, 0x2D01BCu);
    ctx->pc = 0x19D9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D9B0u, 0x2D01B4u, 0x2D01BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D01BCu;
label_2d01bc:
    // 0x2d01bc: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2d01bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d01c0: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x2d01c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2d01c4: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2d01c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2d01c8: 0x24428480  addiu       $v0, $v0, -0x7B80
    ctx->pc = 0x2d01c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935680));
    // 0x2d01cc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d01ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d01d0: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2d01d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d01d4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2d01d4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2d01d8: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x2d01d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x2d01dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d01dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d01e0: 0x0  nop
    ctx->pc = 0x2d01e0u;
    // NOP
    // 0x2d01e4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2d01e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2d01e8: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x2d01e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x2d01ec: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2d01ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d01f0: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x2d01f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2d01f4: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2d01f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2d01f8: 0x24428480  addiu       $v0, $v0, -0x7B80
    ctx->pc = 0x2d01f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935680));
    // 0x2d01fc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d01fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d0200: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2d0200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d0204: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x2d0204u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x2d0208: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2d0208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d020c: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2d020cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2d0210: 0x433821  addu        $a3, $v0, $v1
    ctx->pc = 0x2d0210u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d0214: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2d0214u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2d0218: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x2d0218u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d021c: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x2d021cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2d0220: 0x27a80020  addiu       $t0, $sp, 0x20
    ctx->pc = 0x2d0220u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2d0224: 0xc7ac004c  lwc1        $f12, 0x4C($sp)
    ctx->pc = 0x2d0224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2d0228: 0xc0d5f88  jal         func_357E20
    ctx->pc = 0x2D0228u;
    SET_GPR_U32(ctx, 31, 0x2D0230u);
    ctx->pc = 0x357E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x357E20u, 0x2D0228u, 0x2D0230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0230u;
label_2d0230:
    // 0x2d0230: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2d0230u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2d0234: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2d0234u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2d0238: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2d0238u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2d023c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2d023cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2d0240: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2d0240u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2d0244: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2d0244u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2d0248: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x2d0248u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2d024c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2d024cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2d0250: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2d0250u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2d0254: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2d0254u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2d0258: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2d0258u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2d025c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2d025cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2d0260: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x2d0260u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x2d0264: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x2d0264u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x2d0268: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2d0268u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2d026c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2d026cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2d0270: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x2d0270u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2d0274: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2d0274u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2d0278: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x2d0278u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x2d027c: 0x14600080  bnez        $v1, . + 4 + (0x80 << 2)
    ctx->pc = 0x2D027Cu;
    {
        const bool branch_taken_0x2d027c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d027c) {
            ctx->pc = 0x2D0480u;
            return;
        }
    }
    ctx->pc = 0x2D0284u;
    // 0x2d0284: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2d0284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d0288: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x2d0288u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2d028c: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2d028cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2d0290: 0x24428480  addiu       $v0, $v0, -0x7B80
    ctx->pc = 0x2d0290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935680));
    // 0x2d0294: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d0294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d0298: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2d0298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d029c: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x2d029cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x2d02a0: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2d02a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d02a4: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2d02a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2d02a8: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x2d02a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d02ac: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x2d02acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d02b0: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x2d02b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2d02b4: 0xc0d5fb4  jal         func_357ED0
    ctx->pc = 0x2D02B4u;
    SET_GPR_U32(ctx, 31, 0x2D02BCu);
    ctx->pc = 0x357ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x357ED0u, 0x2D02B4u, 0x2D02BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D02BCu;
label_2d02bc:
    // 0x2d02bc: 0x10000070  b           . + 4 + (0x70 << 2)
    ctx->pc = 0x2D02BCu;
    {
        const bool branch_taken_0x2d02bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d02bc) {
            ctx->pc = 0x2D0480u;
            return;
        }
    }
    ctx->pc = 0x2D02C4u;
}
