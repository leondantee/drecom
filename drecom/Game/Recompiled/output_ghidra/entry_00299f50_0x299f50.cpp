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

// Function: entry_00299f50
// Address: 0x299f50 - 0x29a0dc
void entry_00299f50_0x299f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00299f50_0x299f50");
#endif

    switch (ctx->pc) {
        case 0x29a04cu: goto label_29a04c;
        case 0x29a0d4u: goto label_29a0d4;
        default: break;
    }

    ctx->pc = 0x299f50u;

    // 0x299f50: 0xafb20188  sw          $s2, 0x188($sp)
    ctx->pc = 0x299f50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 392), GPR_U32(ctx, 18));
    // 0x299f54: 0x26460010  addiu       $a2, $s2, 0x10
    ctx->pc = 0x299f54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x299f58: 0x70c09628  paddub      $s2, $a2, $zero
    ctx->pc = 0x299f58u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x299f5c: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x299f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x299f60: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x299f60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x299f64: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x299f64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x299f68: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x299f68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x299f6c: 0xfe430000  sd          $v1, 0x0($s2)
    ctx->pc = 0x299f6cu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 3));
    // 0x299f70: 0x3c030eee  lui         $v1, 0xEEE
    ctx->pc = 0x299f70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)3822 << 16));
    // 0x299f74: 0x3463eeee  ori         $v1, $v1, 0xEEEE
    ctx->pc = 0x299f74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)61166);
    // 0x299f78: 0xfe430008  sd          $v1, 0x8($s2)
    ctx->pc = 0x299f78u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 3));
    // 0x299f7c: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x299f7cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x299f80: 0x8fa201a8  lw          $v0, 0x1A8($sp)
    ctx->pc = 0x299f80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x299f84: 0xdc420160  ld          $v0, 0x160($v0)
    ctx->pc = 0x299f84u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 352)));
    // 0x299f88: 0xfe420000  sd          $v0, 0x0($s2)
    ctx->pc = 0x299f88u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 2));
    // 0x299f8c: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x299f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x299f90: 0xfe420008  sd          $v0, 0x8($s2)
    ctx->pc = 0x299f90u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 2));
    // 0x299f94: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x299f94u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x299f98: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x299f98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x299f9c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x299f9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x299fa0: 0x3c020a00  lui         $v0, 0xA00
    ctx->pc = 0x299fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2560 << 16));
    // 0x299fa4: 0x34420070  ori         $v0, $v0, 0x70
    ctx->pc = 0x299fa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)112);
    // 0x299fa8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x299fa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x299fac: 0xfe420000  sd          $v0, 0x0($s2)
    ctx->pc = 0x299facu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 2));
    // 0x299fb0: 0x2402004e  addiu       $v0, $zero, 0x4E
    ctx->pc = 0x299fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x299fb4: 0xfe420008  sd          $v0, 0x8($s2)
    ctx->pc = 0x299fb4u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 2));
    // 0x299fb8: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x299fb8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x299fbc: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x299fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x299fc0: 0xfe420000  sd          $v0, 0x0($s2)
    ctx->pc = 0x299fc0u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 2));
    // 0x299fc4: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x299fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x299fc8: 0xfe420008  sd          $v0, 0x8($s2)
    ctx->pc = 0x299fc8u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 2));
    // 0x299fcc: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x299fccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x299fd0: 0x8fa201a8  lw          $v0, 0x1A8($sp)
    ctx->pc = 0x299fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x299fd4: 0xdc420168  ld          $v0, 0x168($v0)
    ctx->pc = 0x299fd4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 360)));
    // 0x299fd8: 0xfe420000  sd          $v0, 0x0($s2)
    ctx->pc = 0x299fd8u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 2));
    // 0x299fdc: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x299fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x299fe0: 0xfe420008  sd          $v0, 0x8($s2)
    ctx->pc = 0x299fe0u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 2));
    // 0x299fe4: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x299fe4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x299fe8: 0x8fa201a8  lw          $v0, 0x1A8($sp)
    ctx->pc = 0x299fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x299fec: 0xdc420170  ld          $v0, 0x170($v0)
    ctx->pc = 0x299fecu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 368)));
    // 0x299ff0: 0xfe420000  sd          $v0, 0x0($s2)
    ctx->pc = 0x299ff0u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 2));
    // 0x299ff4: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x299ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x299ff8: 0xfe420008  sd          $v0, 0x8($s2)
    ctx->pc = 0x299ff8u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 2));
    // 0x299ffc: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x299ffcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x29a000: 0x8fa201a8  lw          $v0, 0x1A8($sp)
    ctx->pc = 0x29a000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x29a004: 0xdc420180  ld          $v0, 0x180($v0)
    ctx->pc = 0x29a004u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 384)));
    // 0x29a008: 0xfe420000  sd          $v0, 0x0($s2)
    ctx->pc = 0x29a008u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 2));
    // 0x29a00c: 0x24020047  addiu       $v0, $zero, 0x47
    ctx->pc = 0x29a00cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x29a010: 0xfe420008  sd          $v0, 0x8($s2)
    ctx->pc = 0x29a010u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 2));
    // 0x29a014: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x29a014u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x29a018: 0x8fa201a8  lw          $v0, 0x1A8($sp)
    ctx->pc = 0x29a018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x29a01c: 0xdc420178  ld          $v0, 0x178($v0)
    ctx->pc = 0x29a01cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 376)));
    // 0x29a020: 0xfe420000  sd          $v0, 0x0($s2)
    ctx->pc = 0x29a020u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 2));
    // 0x29a024: 0x24020042  addiu       $v0, $zero, 0x42
    ctx->pc = 0x29a024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x29a028: 0xfe420008  sd          $v0, 0x8($s2)
    ctx->pc = 0x29a028u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 2));
    // 0x29a02c: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x29a02cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x29a030: 0xafb2018c  sw          $s2, 0x18C($sp)
    ctx->pc = 0x29a030u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 396), GPR_U32(ctx, 18));
    // 0x29a034: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x29a034u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x29a038: 0x8fa201a8  lw          $v0, 0x1A8($sp)
    ctx->pc = 0x29a038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x29a03c: 0x72402628  paddub      $a0, $s2, $zero
    ctx->pc = 0x29a03cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x29a040: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x29a040u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x29a044: 0xc040cb0  jal         func_1032C0
    ctx->pc = 0x29A044u;
    SET_GPR_U32(ctx, 31, 0x29A04Cu);
    ctx->pc = 0x1032C0u;
    {
        ctx->pc = 0x29A04Cu;
        ps2_stubs::sceVu0FTOI0Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x29A04Cu) { return; }
    ctx->pc = 0x29A04Cu;
label_29a04c:
    // 0x29a04c: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x29a04cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x29a050: 0x8fa2018c  lw          $v0, 0x18C($sp)
    ctx->pc = 0x29a050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
    // 0x29a054: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x29a054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x29a058: 0x2421823  subu        $v1, $s2, $v0
    ctx->pc = 0x29a058u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x29a05c: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x29a05cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x29a060: 0x31102  srl         $v0, $v1, 4
    ctx->pc = 0x29a060u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x29a064: 0xafa20184  sw          $v0, 0x184($sp)
    ctx->pc = 0x29a064u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 388), GPR_U32(ctx, 2));
    // 0x29a068: 0x8fa20184  lw          $v0, 0x184($sp)
    ctx->pc = 0x29a068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 388)));
    // 0x29a06c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x29a06cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x29a070: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x29a070u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x29a074: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x29a074u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x29a078: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x29a078u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x29a07c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x29a07cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x29a080: 0x8fa2018c  lw          $v0, 0x18C($sp)
    ctx->pc = 0x29a080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
    // 0x29a084: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x29a084u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x29a088: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x29a088u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29a08c: 0x8fa2018c  lw          $v0, 0x18C($sp)
    ctx->pc = 0x29a08cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
    // 0x29a090: 0xfc430008  sd          $v1, 0x8($v0)
    ctx->pc = 0x29a090u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 3));
    // 0x29a094: 0xafb2018c  sw          $s2, 0x18C($sp)
    ctx->pc = 0x29a094u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 396), GPR_U32(ctx, 18));
    // 0x29a098: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x29a098u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x29a09c: 0x8fa201a8  lw          $v0, 0x1A8($sp)
    ctx->pc = 0x29a09cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x29a0a0: 0x944201a8  lhu         $v0, 0x1A8($v0)
    ctx->pc = 0x29a0a0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 424)));
    // 0x29a0a4: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x29a0a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x29a0a8: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x29a0a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x29a0ac: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x29A0ACu;
    {
        const bool branch_taken_0x29a0ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29a0ac) {
            ctx->pc = 0x29A0DCu;
            return;
        }
    }
    ctx->pc = 0x29A0B4u;
    // 0x29a0b4: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x29a0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x29a0b8: 0xc44001b4  lwc1        $f0, 0x1B4($v0)
    ctx->pc = 0x29a0b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29a0bc: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x29a0bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x29a0c0: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x29a0c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x29a0c4: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x29a0c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x29a0c8: 0xc7ac0198  lwc1        $f12, 0x198($sp)
    ctx->pc = 0x29a0c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x29a0cc: 0xc040c60  jal         func_103180
    ctx->pc = 0x29A0CCu;
    SET_GPR_U32(ctx, 31, 0x29A0D4u);
    ctx->pc = 0x103180u;
    {
        ctx->pc = 0x29A0D4u;
        ps2_stubs::sceVu0DivVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x29A0D4u) { return; }
    ctx->pc = 0x29A0D4u;
label_29a0d4:
    // 0x29a0d4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x29A0D4u;
    {
        const bool branch_taken_0x29a0d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29a0d4) {
            ctx->pc = 0x29A0ECu;
            return;
        }
    }
    ctx->pc = 0x29A0DCu;
}
