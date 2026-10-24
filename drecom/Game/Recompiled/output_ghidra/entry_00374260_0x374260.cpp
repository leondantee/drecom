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

// Function: entry_00374260
// Address: 0x374260 - 0x374304
void entry_00374260_0x374260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00374260_0x374260");
#endif

    ctx->pc = 0x374260u;

    // 0x374260: 0x96030140  lhu         $v1, 0x140($s0)
    ctx->pc = 0x374260u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x374264: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x374264u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x374268: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x374268u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x37426c: 0x106000a4  beqz        $v1, . + 4 + (0xA4 << 2)
    ctx->pc = 0x37426Cu;
    {
        const bool branch_taken_0x37426c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x37426c) {
            ctx->pc = 0x374500u;
            return;
        }
    }
    ctx->pc = 0x374274u;
    // 0x374274: 0x96030140  lhu         $v1, 0x140($s0)
    ctx->pc = 0x374274u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x374278: 0x3063f7ff  andi        $v1, $v1, 0xF7FF
    ctx->pc = 0x374278u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63487);
    // 0x37427c: 0xa6030140  sh          $v1, 0x140($s0)
    ctx->pc = 0x37427cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 3));
    // 0x374280: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x374280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x374284: 0x122180  sll         $a0, $s2, 6
    ctx->pc = 0x374284u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
    // 0x374288: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x374288u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x37428c: 0x649821  addu        $s3, $v1, $a0
    ctx->pc = 0x37428cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x374290: 0x92030143  lbu         $v1, 0x143($s0)
    ctx->pc = 0x374290u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 323)));
    // 0x374294: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x374294u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x374298: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x374298u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x37429c: 0x10830042  beq         $a0, $v1, . + 4 + (0x42 << 2)
    ctx->pc = 0x37429Cu;
    {
        const bool branch_taken_0x37429c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x37429c) {
            ctx->pc = 0x3743A8u;
            return;
        }
    }
    ctx->pc = 0x3742A4u;
    // 0x3742a4: 0x96230140  lhu         $v1, 0x140($s1)
    ctx->pc = 0x3742a4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 320)));
    // 0x3742a8: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x3742a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x3742ac: 0x30630200  andi        $v1, $v1, 0x200
    ctx->pc = 0x3742acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
    // 0x3742b0: 0x10600035  beqz        $v1, . + 4 + (0x35 << 2)
    ctx->pc = 0x3742B0u;
    {
        const bool branch_taken_0x3742b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3742b0) {
            ctx->pc = 0x374388u;
            return;
        }
    }
    ctx->pc = 0x3742B8u;
    // 0x3742b8: 0x96230140  lhu         $v1, 0x140($s1)
    ctx->pc = 0x3742b8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 320)));
    // 0x3742bc: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x3742bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x3742c0: 0x30630400  andi        $v1, $v1, 0x400
    ctx->pc = 0x3742c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
    // 0x3742c4: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x3742C4u;
    {
        const bool branch_taken_0x3742c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3742c4) {
            ctx->pc = 0x374304u;
            return;
        }
    }
    ctx->pc = 0x3742CCu;
    // 0x3742cc: 0xc6210134  lwc1        $f1, 0x134($s1)
    ctx->pc = 0x3742ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3742d0: 0xc6000134  lwc1        $f0, 0x134($s0)
    ctx->pc = 0x3742d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3742d4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x3742d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3742d8: 0xe6000134  swc1        $f0, 0x134($s0)
    ctx->pc = 0x3742d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 308), bits); }
    // 0x3742dc: 0xc6210138  lwc1        $f1, 0x138($s1)
    ctx->pc = 0x3742dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3742e0: 0xc6000138  lwc1        $f0, 0x138($s0)
    ctx->pc = 0x3742e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3742e4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x3742e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3742e8: 0xe6000138  swc1        $f0, 0x138($s0)
    ctx->pc = 0x3742e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 312), bits); }
    // 0x3742ec: 0xc621013c  lwc1        $f1, 0x13C($s1)
    ctx->pc = 0x3742ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3742f0: 0xc600013c  lwc1        $f0, 0x13C($s0)
    ctx->pc = 0x3742f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3742f4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x3742f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3742f8: 0xe600013c  swc1        $f0, 0x13C($s0)
    ctx->pc = 0x3742f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 316), bits); }
    // 0x3742fc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x3742FCu;
    {
        const bool branch_taken_0x3742fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3742fc) {
            ctx->pc = 0x374328u;
            return;
        }
    }
    ctx->pc = 0x374304u;
}
