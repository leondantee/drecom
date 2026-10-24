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

// Function: foot_se_chk
// Address: 0x19fd30 - 0x19fec0
void foot_se_chk_0x19fd30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("foot_se_chk_0x19fd30");
#endif

    switch (ctx->pc) {
        case 0x19fd90u: goto label_19fd90;
        case 0x19fdd8u: goto label_19fdd8;
        case 0x19fe0cu: goto label_19fe0c;
        case 0x19fea0u: goto label_19fea0;
        default: break;
    }

    ctx->pc = 0x19fd30u;

    // 0x19fd30: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x19fd30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x19fd34: 0x7fbf0040  sq          $ra, 0x40($sp)
    ctx->pc = 0x19fd34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 31));
    // 0x19fd38: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x19fd38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x19fd3c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x19fd3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x19fd40: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19fd40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19fd44: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19fd44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19fd48: 0xafa40070  sw          $a0, 0x70($sp)
    ctx->pc = 0x19fd48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 4));
    // 0x19fd4c: 0xafa50078  sw          $a1, 0x78($sp)
    ctx->pc = 0x19fd4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 5));
    // 0x19fd50: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x19fd50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x19fd54: 0x24701bd0  addiu       $s0, $v1, 0x1BD0
    ctx->pc = 0x19fd54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 7120));
    // 0x19fd58: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x19fd58u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x19fd5c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x19fd5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x19fd60: 0x8c231a94  lw          $v1, 0x1A94($at)
    ctx->pc = 0x19fd60u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A94u));
    // 0x19fd64: 0x8c63003c  lw          $v1, 0x3C($v1)
    ctx->pc = 0x19fd64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
    // 0x19fd68: 0x10600035  beqz        $v1, . + 4 + (0x35 << 2)
    ctx->pc = 0x19FD68u;
    {
        const bool branch_taken_0x19fd68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19fd68) {
            ctx->pc = 0x19FE40u;
            goto label_19fe40;
        }
    }
    ctx->pc = 0x19FD70u;
    // 0x19fd70: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x19fd70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x19fd74: 0x2463dce0  addiu       $v1, $v1, -0x2320
    ctx->pc = 0x19fd74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958304));
    // 0x19fd78: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x19fd78u;
    SET_GPR_VEC(ctx, 4, FAST_READ128(0x3EDCE0u));
    // 0x19fd7c: 0x27a30050  addiu       $v1, $sp, 0x50
    ctx->pc = 0x19fd7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x19fd80: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x19fd80u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x19fd84: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x19fd84u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x19fd88: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x19FD88u;
    {
        const bool branch_taken_0x19fd88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19fd88) {
            ctx->pc = 0x19FE30u;
            goto label_19fe30;
        }
    }
    ctx->pc = 0x19FD90u;
label_19fd90:
    // 0x19fd90: 0x92030080  lbu         $v1, 0x80($s0)
    ctx->pc = 0x19fd90u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x19fd94: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x19fd94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x19fd98: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x19fd98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x19fd9c: 0x10600022  beqz        $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x19FD9Cu;
    {
        const bool branch_taken_0x19fd9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19fd9c) {
            ctx->pc = 0x19FE28u;
            goto label_19fe28;
        }
    }
    ctx->pc = 0x19FDA4u;
    // 0x19fda4: 0x92030081  lbu         $v1, 0x81($s0)
    ctx->pc = 0x19fda4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 129)));
    // 0x19fda8: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x19fda8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x19fdac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19fdacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19fdb0: 0x10830010  beq         $a0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x19FDB0u;
    {
        const bool branch_taken_0x19fdb0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x19fdb0) {
            ctx->pc = 0x19FDF4u;
            goto label_19fdf4;
        }
    }
    ctx->pc = 0x19FDB8u;
    // 0x19fdb8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19FDB8u;
    {
        const bool branch_taken_0x19fdb8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x19fdb8) {
            ctx->pc = 0x19FDC8u;
            goto label_19fdc8;
        }
    }
    ctx->pc = 0x19FDC0u;
    // 0x19fdc0: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x19FDC0u;
    {
        const bool branch_taken_0x19fdc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19fdc0) {
            ctx->pc = 0x19FE28u;
            goto label_19fe28;
        }
    }
    ctx->pc = 0x19FDC8u;
label_19fdc8:
    // 0x19fdc8: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x19fdc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x19fdcc: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x19fdccu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x19fdd0: 0xc0568c4  jal         func_15A310
    ctx->pc = 0x19FDD0u;
    SET_GPR_U32(ctx, 31, 0x19FDD8u);
    ctx->pc = 0x15A310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15A310u, 0x19FDD0u, 0x19FDD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FDD8u;
label_19fdd8:
    // 0x19fdd8: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x19FDD8u;
    {
        const bool branch_taken_0x19fdd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19fdd8) {
            ctx->pc = 0x19FE28u;
            goto label_19fe28;
        }
    }
    ctx->pc = 0x19FDE0u;
    // 0x19fde0: 0x82030082  lb          $v1, 0x82($s0)
    ctx->pc = 0x19fde0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 130)));
    // 0x19fde4: 0x38e3c  dsll32      $s1, $v1, 24
    ctx->pc = 0x19fde4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) << (32 + 24));
    // 0x19fde8: 0x118e3f  dsra32      $s1, $s1, 24
    ctx->pc = 0x19fde8u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 24));
    // 0x19fdec: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x19FDECu;
    {
        const bool branch_taken_0x19fdec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19fdec) {
            ctx->pc = 0x19FE40u;
            goto label_19fe40;
        }
    }
    ctx->pc = 0x19FDF4u;
label_19fdf4:
    // 0x19fdf4: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x19fdf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x19fdf8: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x19fdf8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x19fdfc: 0xc60c0010  lwc1        $f12, 0x10($s0)
    ctx->pc = 0x19fdfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x19fe00: 0xc60d0014  lwc1        $f13, 0x14($s0)
    ctx->pc = 0x19fe00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x19fe04: 0xc05692c  jal         func_15A4B0
    ctx->pc = 0x19FE04u;
    SET_GPR_U32(ctx, 31, 0x19FE0Cu);
    ctx->pc = 0x15A4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15A4B0u, 0x19FE04u, 0x19FE0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FE0Cu;
label_19fe0c:
    // 0x19fe0c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x19FE0Cu;
    {
        const bool branch_taken_0x19fe0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19fe0c) {
            ctx->pc = 0x19FE28u;
            goto label_19fe28;
        }
    }
    ctx->pc = 0x19FE14u;
    // 0x19fe14: 0x82030082  lb          $v1, 0x82($s0)
    ctx->pc = 0x19fe14u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 130)));
    // 0x19fe18: 0x38e3c  dsll32      $s1, $v1, 24
    ctx->pc = 0x19fe18u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) << (32 + 24));
    // 0x19fe1c: 0x118e3f  dsra32      $s1, $s1, 24
    ctx->pc = 0x19fe1cu;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 24));
    // 0x19fe20: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x19FE20u;
    {
        const bool branch_taken_0x19fe20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19fe20) {
            ctx->pc = 0x19FE40u;
            goto label_19fe40;
        }
    }
    ctx->pc = 0x19FE28u;
label_19fe28:
    // 0x19fe28: 0x26100090  addiu       $s0, $s0, 0x90
    ctx->pc = 0x19fe28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x19fe2c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x19fe2cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_19fe30:
    // 0x19fe30: 0x2e430010  sltiu       $v1, $s2, 0x10
    ctx->pc = 0x19fe30u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x19fe34: 0x1460ffd6  bnez        $v1, . + 4 + (-0x2A << 2)
    ctx->pc = 0x19FE34u;
    {
        const bool branch_taken_0x19fe34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x19fe34) {
            ctx->pc = 0x19FD90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19fd90;
        }
    }
    ctx->pc = 0x19FE3Cu;
    // 0x19fe3c: 0x0  nop
    ctx->pc = 0x19fe3cu;
    // NOP
label_19fe40:
    // 0x19fe40: 0x111840  sll         $v1, $s1, 1
    ctx->pc = 0x19fe40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x19fe44: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x19fe44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x19fe48: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x19fe48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x19fe4c: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x19fe4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x19fe50: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x19fe50u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19fe54: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x19fe54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x19fe58: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x19fe58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x19fe5c: 0xa4640000  sh          $a0, 0x0($v1)
    ctx->pc = 0x19fe5cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x19fe60: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x19fe60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x19fe64: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x19fe64u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19fe68: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x19fe68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x19fe6c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x19fe6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x19fe70: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x19fe70u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x19fe74: 0x0  nop
    ctx->pc = 0x19fe74u;
    // NOP
    // 0x19fe78: 0x0  nop
    ctx->pc = 0x19fe78u;
    // NOP
    // 0x19fe7c: 0x9810  mfhi        $s3
    ctx->pc = 0x19fe7cu;
    SET_GPR_U64(ctx, 19, ctx->hi);
    // 0x19fe80: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x19fe80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19fe84: 0x12630006  beq         $s3, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x19FE84u;
    {
        const bool branch_taken_0x19fe84 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 3));
        if (branch_taken_0x19fe84) {
            ctx->pc = 0x19FEA0u;
            goto label_19fea0;
        }
    }
    ctx->pc = 0x19FE8Cu;
    // 0x19fe8c: 0x8fa60078  lw          $a2, 0x78($sp)
    ctx->pc = 0x19fe8cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x19fe90: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x19fe90u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x19fe94: 0x72602e28  paddub      $a1, $s3, $zero
    ctx->pc = 0x19fe94u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x19fe98: 0xc0c56f0  jal         func_315BC0
    ctx->pc = 0x19FE98u;
    SET_GPR_U32(ctx, 31, 0x19FEA0u);
    ctx->pc = 0x315BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x315BC0u, 0x19FE98u, 0x19FEA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FEA0u;
label_19fea0:
    // 0x19fea0: 0x7bbf0040  lq          $ra, 0x40($sp)
    ctx->pc = 0x19fea0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19fea4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x19fea4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19fea8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x19fea8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19feac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19feacu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19feb0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19feb0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19feb4: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x19feb4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x19feb8: 0x3e00008  jr          $ra
    ctx->pc = 0x19FEB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19FEB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19FEC0u;
}
