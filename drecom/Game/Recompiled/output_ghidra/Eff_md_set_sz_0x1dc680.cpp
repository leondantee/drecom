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

// Function: Eff_md_set_sz
// Address: 0x1dc680 - 0x1dc7e0
void Eff_md_set_sz_0x1dc680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Eff_md_set_sz_0x1dc680");
#endif

    switch (ctx->pc) {
        case 0x1dc6c0u: goto label_1dc6c0;
        case 0x1dc6e4u: goto label_1dc6e4;
        case 0x1dc710u: goto label_1dc710;
        case 0x1dc730u: goto label_1dc730;
        default: break;
    }

    ctx->pc = 0x1dc680u;

    // 0x1dc680: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1dc680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1dc684: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x1dc684u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1dc688: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1dc688u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1dc68c: 0xafa40058  sw          $a0, 0x58($sp)
    ctx->pc = 0x1dc68cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
    // 0x1dc690: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1dc690u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1dc694: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1dc694u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dc698: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1dc698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1dc69c: 0xe440012c  swc1        $f0, 0x12C($v0)
    ctx->pc = 0x1dc69cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 300), bits); }
    // 0x1dc6a0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1dc6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1dc6a4: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x1dc6a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x1dc6a8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1dc6a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1dc6ac: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x1dc6acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x1dc6b0: 0x2445e550  addiu       $a1, $v0, -0x1AB0
    ctx->pc = 0x1dc6b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960464));
    // 0x1dc6b4: 0x24660030  addiu       $a2, $v1, 0x30
    ctx->pc = 0x1dc6b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x1dc6b8: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x1DC6B8u;
    SET_GPR_U32(ctx, 31, 0x1DC6C0u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x1DC6C0u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1DC6C0u) { return; }
    ctx->pc = 0x1DC6C0u;
label_1dc6c0:
    // 0x1dc6c0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1dc6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1dc6c4: 0x9442000c  lhu         $v0, 0xC($v0)
    ctx->pc = 0x1dc6c4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1dc6c8: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1dc6c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1dc6cc: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x1dc6ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x1dc6d0: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1DC6D0u;
    {
        const bool branch_taken_0x1dc6d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dc6d0) {
            ctx->pc = 0x1DC6ECu;
            goto label_1dc6ec;
        }
    }
    ctx->pc = 0x1DC6D8u;
    // 0x1dc6d8: 0xc7ac002c  lwc1        $f12, 0x2C($sp)
    ctx->pc = 0x1dc6d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1dc6dc: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x1DC6DCu;
    SET_GPR_U32(ctx, 31, 0x1DC6E4u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x1DC6DCu, 0x1DC6E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC6E4u;
label_1dc6e4:
    // 0x1dc6e4: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1dc6e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1dc6e8: 0xac620014  sw          $v0, 0x14($v1)
    ctx->pc = 0x1dc6e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
label_1dc6ec:
    // 0x1dc6ec: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1dc6ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1dc6f0: 0x8c230af0  lw          $v1, 0xAF0($at)
    ctx->pc = 0x1dc6f0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x1dc6f4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1dc6f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1dc6f8: 0x8c220af0  lw          $v0, 0xAF0($at)
    ctx->pc = 0x1dc6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x1dc6fc: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1dc6fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1dc700: 0x24650190  addiu       $a1, $v1, 0x190
    ctx->pc = 0x1dc700u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 400));
    // 0x1dc704: 0x244601a0  addiu       $a2, $v0, 0x1A0
    ctx->pc = 0x1dc704u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 416));
    // 0x1dc708: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x1DC708u;
    SET_GPR_U32(ctx, 31, 0x1DC710u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x1DC708u, 0x1DC710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC710u;
label_1dc710:
    // 0x1dc710: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1dc710u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1dc714: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1dc714u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dc718: 0x0  nop
    ctx->pc = 0x1dc718u;
    // NOP
    // 0x1dc71c: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x1dc71cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x1dc720: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1dc720u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1dc724: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x1dc724u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1dc728: 0xc040c24  jal         func_103090
    ctx->pc = 0x1DC728u;
    SET_GPR_U32(ctx, 31, 0x1DC730u);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x1DC730u;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1DC730u) { return; }
    ctx->pc = 0x1DC730u;
label_1dc730:
    // 0x1dc730: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1dc730u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1dc734: 0x8c230140  lw          $v1, 0x140($at)
    ctx->pc = 0x1dc734u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0140u));
    // 0x1dc738: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x1dc738u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1dc73c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1dc73cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1dc740: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1dc740u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1dc744: 0x8c700064  lw          $s0, 0x64($v1)
    ctx->pc = 0x1dc744u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 100)));
    // 0x1dc748: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1dc748u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1dc74c: 0x9463000c  lhu         $v1, 0xC($v1)
    ctx->pc = 0x1dc74cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x1dc750: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1dc750u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1dc754: 0x30630006  andi        $v1, $v1, 0x6
    ctx->pc = 0x1dc754u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)6);
    // 0x1dc758: 0x1060001c  beqz        $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x1DC758u;
    {
        const bool branch_taken_0x1dc758 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dc758) {
            ctx->pc = 0x1DC7CCu;
            goto label_1dc7cc;
        }
    }
    ctx->pc = 0x1DC760u;
    // 0x1dc760: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1dc760u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dc764: 0x0  nop
    ctx->pc = 0x1dc764u;
    // NOP
    // 0x1dc768: 0xe6000070  swc1        $f0, 0x70($s0)
    ctx->pc = 0x1dc768u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
    // 0x1dc76c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1dc76cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1dc770: 0x8c230144  lw          $v1, 0x144($at)
    ctx->pc = 0x1dc770u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0144u));
    // 0x1dc774: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1DC774u;
    {
        const bool branch_taken_0x1dc774 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dc774) {
            ctx->pc = 0x1DC794u;
            goto label_1dc794;
        }
    }
    ctx->pc = 0x1DC77Cu;
    // 0x1dc77c: 0x3c033b00  lui         $v1, 0x3B00
    ctx->pc = 0x1dc77cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15104 << 16));
    // 0x1dc780: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1dc780u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dc784: 0x0  nop
    ctx->pc = 0x1dc784u;
    // NOP
    // 0x1dc788: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x1dc788u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x1dc78c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1DC78Cu;
    {
        const bool branch_taken_0x1dc78c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dc78c) {
            ctx->pc = 0x1DC7A0u;
            goto label_1dc7a0;
        }
    }
    ctx->pc = 0x1DC794u;
label_1dc794:
    // 0x1dc794: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1dc794u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dc798: 0x0  nop
    ctx->pc = 0x1dc798u;
    // NOP
    // 0x1dc79c: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x1dc79cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
label_1dc7a0:
    // 0x1dc7a0: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x1dc7a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dc7a4: 0xe6000074  swc1        $f0, 0x74($s0)
    ctx->pc = 0x1dc7a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
    // 0x1dc7a8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1dc7a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dc7ac: 0x0  nop
    ctx->pc = 0x1dc7acu;
    // NOP
    // 0x1dc7b0: 0xe6000078  swc1        $f0, 0x78($s0)
    ctx->pc = 0x1dc7b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
    // 0x1dc7b4: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x1dc7b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dc7b8: 0xe6000080  swc1        $f0, 0x80($s0)
    ctx->pc = 0x1dc7b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 128), bits); }
    // 0x1dc7bc: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x1dc7bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dc7c0: 0xe6000084  swc1        $f0, 0x84($s0)
    ctx->pc = 0x1dc7c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 132), bits); }
    // 0x1dc7c4: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x1dc7c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dc7c8: 0xe6000088  swc1        $f0, 0x88($s0)
    ctx->pc = 0x1dc7c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 136), bits); }
label_1dc7cc:
    // 0x1dc7cc: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x1dc7ccu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dc7d0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1dc7d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dc7d4: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x1dc7d4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1dc7d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1DC7D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DC7D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DC7E0u;
}
