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

// Function: entry_0032bba0
// Address: 0x32bba0 - 0x32bca4
void entry_0032bba0_0x32bba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032bba0_0x32bba0");
#endif

    switch (ctx->pc) {
        case 0x32bbc8u: goto label_32bbc8;
        case 0x32bbf8u: goto label_32bbf8;
        case 0x32bc8cu: goto label_32bc8c;
        case 0x32bc98u: goto label_32bc98;
        default: break;
    }

    ctx->pc = 0x32bba0u;

    // 0x32bba0: 0x44940000  mtc1        $s4, $f0
    ctx->pc = 0x32bba0u;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32bba4: 0x0  nop
    ctx->pc = 0x32bba4u;
    // NOP
    // 0x32bba8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x32bba8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x32bbac: 0x3c033f4c  lui         $v1, 0x3F4C
    ctx->pc = 0x32bbacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16204 << 16));
    // 0x32bbb0: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x32bbb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x32bbb4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x32bbb4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32bbb8: 0x0  nop
    ctx->pc = 0x32bbb8u;
    // NOP
    // 0x32bbbc: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x32bbbcu;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x32bbc0: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x32BBC0u;
    SET_GPR_U32(ctx, 31, 0x32BBC8u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x32BBC0u, 0x32BBC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BBC8u;
label_32bbc8:
    // 0x32bbc8: 0x7040a628  paddub      $s4, $v0, $zero
    ctx->pc = 0x32bbc8u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x32bbcc: 0x8fa600b4  lw          $a2, 0xB4($sp)
    ctx->pc = 0x32bbccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x32bbd0: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x32bbd0u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32bbd4: 0x0  nop
    ctx->pc = 0x32bbd4u;
    // NOP
    // 0x32bbd8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x32bbd8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x32bbdc: 0x3c033f4c  lui         $v1, 0x3F4C
    ctx->pc = 0x32bbdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16204 << 16));
    // 0x32bbe0: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x32bbe0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x32bbe4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x32bbe4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32bbe8: 0x0  nop
    ctx->pc = 0x32bbe8u;
    // NOP
    // 0x32bbec: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x32bbecu;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x32bbf0: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x32BBF0u;
    SET_GPR_U32(ctx, 31, 0x32BBF8u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x32BBF0u, 0x32BBF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BBF8u;
label_32bbf8:
    // 0x32bbf8: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x32bbf8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x32bbfc: 0xafa600b4  sw          $a2, 0xB4($sp)
    ctx->pc = 0x32bbfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 6));
    // 0x32bc00: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x32bc00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x32bc04: 0x33100  sll         $a2, $v1, 4
    ctx->pc = 0x32bc04u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x32bc08: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x32bc08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x32bc0c: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x32bc0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x32bc10: 0x2ac00  sll         $s5, $v0, 16
    ctx->pc = 0x32bc10u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x32bc14: 0xd51825  or          $v1, $a2, $s5
    ctx->pc = 0x32bc14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 21));
    // 0x32bc18: 0x26220014  addiu       $v0, $s1, 0x14
    ctx->pc = 0x32bc18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x32bc1c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x32bc1cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x32bc20: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x32bc20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x32bc24: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x32bc24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x32bc28: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x32bc28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x32bc2c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x32bc2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x32bc30: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x32bc30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x32bc34: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x32bc34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x32bc38: 0x26220020  addiu       $v0, $s1, 0x20
    ctx->pc = 0x32bc38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x32bc3c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x32bc3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x32bc40: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x32bc40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x32bc44: 0x8c231a3c  lw          $v1, 0x1A3C($at)
    ctx->pc = 0x32bc44u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A3Cu));
    // 0x32bc48: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x32bc48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x32bc4c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x32bc4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x32bc50: 0x10400059  beqz        $v0, . + 4 + (0x59 << 2)
    ctx->pc = 0x32BC50u;
    {
        const bool branch_taken_0x32bc50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32bc50) {
            ctx->pc = 0x32BDB8u;
            return;
        }
    }
    ctx->pc = 0x32BC58u;
    // 0x32bc58: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x32bc58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x32bc5c: 0x24426150  addiu       $v0, $v0, 0x6150
    ctx->pc = 0x32bc5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24912));
    // 0x32bc60: 0xafa200cc  sw          $v0, 0xCC($sp)
    ctx->pc = 0x32bc60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 2));
    // 0x32bc64: 0x8fa200cc  lw          $v0, 0xCC($sp)
    ctx->pc = 0x32bc64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x32bc68: 0x90425e04  lbu         $v0, 0x5E04($v0)
    ctx->pc = 0x32bc68u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 24068)));
    // 0x32bc6c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x32bc6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x32bc70: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x32bc70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32bc74: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x32BC74u;
    {
        const bool branch_taken_0x32bc74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x32bc74) {
            ctx->pc = 0x32BCA4u;
            return;
        }
    }
    ctx->pc = 0x32BC7Cu;
    // 0x32bc7c: 0x8fa300cc  lw          $v1, 0xCC($sp)
    ctx->pc = 0x32bc7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x32bc80: 0xc46c5e00  lwc1        $f12, 0x5E00($v1)
    ctx->pc = 0x32bc80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24064)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x32bc84: 0xc047fe2  jal         func_11FF88
    ctx->pc = 0x32BC84u;
    SET_GPR_U32(ctx, 31, 0x32BC8Cu);
    ctx->pc = 0x11FF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FF88u, 0x32BC84u, 0x32BC8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BC8Cu;
label_32bc8c:
    // 0x32bc8c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x32bc8cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x32bc90: 0xc047ce4  jal         func_11F390
    ctx->pc = 0x32BC90u;
    SET_GPR_U32(ctx, 31, 0x32BC98u);
    ctx->pc = 0x11F390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F390u, 0x32BC90u, 0x32BC98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BC98u;
label_32bc98:
    // 0x32bc98: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x32bc98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x32bc9c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x32BC9Cu;
    {
        const bool branch_taken_0x32bc9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32bc9c) {
            ctx->pc = 0x32BCE8u;
            return;
        }
    }
    ctx->pc = 0x32BCA4u;
}
