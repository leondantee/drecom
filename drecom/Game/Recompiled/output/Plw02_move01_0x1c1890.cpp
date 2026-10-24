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

// Function: Plw02_move01
// Address: 0x1c1890 - 0x1c1cb8
void Plw02_move01_0x1c1890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Plw02_move01_0x1c1890");
#endif

    switch (ctx->pc) {
        case 0x1c1890u: goto label_1c1890;
        case 0x1c1894u: goto label_1c1894;
        case 0x1c1898u: goto label_1c1898;
        case 0x1c189cu: goto label_1c189c;
        case 0x1c18a0u: goto label_1c18a0;
        case 0x1c18a4u: goto label_1c18a4;
        case 0x1c18a8u: goto label_1c18a8;
        case 0x1c18acu: goto label_1c18ac;
        case 0x1c18b0u: goto label_1c18b0;
        case 0x1c18b4u: goto label_1c18b4;
        case 0x1c18b8u: goto label_1c18b8;
        case 0x1c18bcu: goto label_1c18bc;
        case 0x1c18c0u: goto label_1c18c0;
        case 0x1c18c4u: goto label_1c18c4;
        case 0x1c18c8u: goto label_1c18c8;
        case 0x1c18ccu: goto label_1c18cc;
        case 0x1c18d0u: goto label_1c18d0;
        case 0x1c18d4u: goto label_1c18d4;
        case 0x1c18d8u: goto label_1c18d8;
        case 0x1c18dcu: goto label_1c18dc;
        case 0x1c18e0u: goto label_1c18e0;
        case 0x1c18e4u: goto label_1c18e4;
        case 0x1c18e8u: goto label_1c18e8;
        case 0x1c18ecu: goto label_1c18ec;
        case 0x1c18f0u: goto label_1c18f0;
        case 0x1c18f4u: goto label_1c18f4;
        case 0x1c18f8u: goto label_1c18f8;
        case 0x1c18fcu: goto label_1c18fc;
        case 0x1c1900u: goto label_1c1900;
        case 0x1c1904u: goto label_1c1904;
        case 0x1c1908u: goto label_1c1908;
        case 0x1c190cu: goto label_1c190c;
        case 0x1c1910u: goto label_1c1910;
        case 0x1c1914u: goto label_1c1914;
        case 0x1c1918u: goto label_1c1918;
        case 0x1c191cu: goto label_1c191c;
        case 0x1c1920u: goto label_1c1920;
        case 0x1c1924u: goto label_1c1924;
        case 0x1c1928u: goto label_1c1928;
        case 0x1c192cu: goto label_1c192c;
        case 0x1c1930u: goto label_1c1930;
        case 0x1c1934u: goto label_1c1934;
        case 0x1c1938u: goto label_1c1938;
        case 0x1c193cu: goto label_1c193c;
        case 0x1c1940u: goto label_1c1940;
        case 0x1c1944u: goto label_1c1944;
        case 0x1c1948u: goto label_1c1948;
        case 0x1c194cu: goto label_1c194c;
        case 0x1c1950u: goto label_1c1950;
        case 0x1c1954u: goto label_1c1954;
        case 0x1c1958u: goto label_1c1958;
        case 0x1c195cu: goto label_1c195c;
        case 0x1c1960u: goto label_1c1960;
        case 0x1c1964u: goto label_1c1964;
        case 0x1c1968u: goto label_1c1968;
        case 0x1c196cu: goto label_1c196c;
        case 0x1c1970u: goto label_1c1970;
        case 0x1c1974u: goto label_1c1974;
        case 0x1c1978u: goto label_1c1978;
        case 0x1c197cu: goto label_1c197c;
        case 0x1c1980u: goto label_1c1980;
        case 0x1c1984u: goto label_1c1984;
        case 0x1c1988u: goto label_1c1988;
        case 0x1c198cu: goto label_1c198c;
        case 0x1c1990u: goto label_1c1990;
        case 0x1c1994u: goto label_1c1994;
        case 0x1c1998u: goto label_1c1998;
        case 0x1c199cu: goto label_1c199c;
        case 0x1c19a0u: goto label_1c19a0;
        case 0x1c19a4u: goto label_1c19a4;
        case 0x1c19a8u: goto label_1c19a8;
        case 0x1c19acu: goto label_1c19ac;
        case 0x1c19b0u: goto label_1c19b0;
        case 0x1c19b4u: goto label_1c19b4;
        case 0x1c19b8u: goto label_1c19b8;
        case 0x1c19bcu: goto label_1c19bc;
        case 0x1c19c0u: goto label_1c19c0;
        case 0x1c19c4u: goto label_1c19c4;
        case 0x1c19c8u: goto label_1c19c8;
        case 0x1c19ccu: goto label_1c19cc;
        case 0x1c19d0u: goto label_1c19d0;
        case 0x1c19d4u: goto label_1c19d4;
        case 0x1c19d8u: goto label_1c19d8;
        case 0x1c19dcu: goto label_1c19dc;
        case 0x1c19e0u: goto label_1c19e0;
        case 0x1c19e4u: goto label_1c19e4;
        case 0x1c19e8u: goto label_1c19e8;
        case 0x1c19ecu: goto label_1c19ec;
        case 0x1c19f0u: goto label_1c19f0;
        case 0x1c19f4u: goto label_1c19f4;
        case 0x1c19f8u: goto label_1c19f8;
        case 0x1c19fcu: goto label_1c19fc;
        case 0x1c1a00u: goto label_1c1a00;
        case 0x1c1a04u: goto label_1c1a04;
        case 0x1c1a08u: goto label_1c1a08;
        case 0x1c1a0cu: goto label_1c1a0c;
        case 0x1c1a10u: goto label_1c1a10;
        case 0x1c1a14u: goto label_1c1a14;
        case 0x1c1a18u: goto label_1c1a18;
        case 0x1c1a1cu: goto label_1c1a1c;
        case 0x1c1a20u: goto label_1c1a20;
        case 0x1c1a24u: goto label_1c1a24;
        case 0x1c1a28u: goto label_1c1a28;
        case 0x1c1a2cu: goto label_1c1a2c;
        case 0x1c1a30u: goto label_1c1a30;
        case 0x1c1a34u: goto label_1c1a34;
        case 0x1c1a38u: goto label_1c1a38;
        case 0x1c1a3cu: goto label_1c1a3c;
        case 0x1c1a40u: goto label_1c1a40;
        case 0x1c1a44u: goto label_1c1a44;
        case 0x1c1a48u: goto label_1c1a48;
        case 0x1c1a4cu: goto label_1c1a4c;
        case 0x1c1a50u: goto label_1c1a50;
        case 0x1c1a54u: goto label_1c1a54;
        case 0x1c1a58u: goto label_1c1a58;
        case 0x1c1a5cu: goto label_1c1a5c;
        case 0x1c1a60u: goto label_1c1a60;
        case 0x1c1a64u: goto label_1c1a64;
        case 0x1c1a68u: goto label_1c1a68;
        case 0x1c1a6cu: goto label_1c1a6c;
        case 0x1c1a70u: goto label_1c1a70;
        case 0x1c1a74u: goto label_1c1a74;
        case 0x1c1a78u: goto label_1c1a78;
        case 0x1c1a7cu: goto label_1c1a7c;
        case 0x1c1a80u: goto label_1c1a80;
        case 0x1c1a84u: goto label_1c1a84;
        case 0x1c1a88u: goto label_1c1a88;
        case 0x1c1a8cu: goto label_1c1a8c;
        case 0x1c1a90u: goto label_1c1a90;
        case 0x1c1a94u: goto label_1c1a94;
        case 0x1c1a98u: goto label_1c1a98;
        case 0x1c1a9cu: goto label_1c1a9c;
        case 0x1c1aa0u: goto label_1c1aa0;
        case 0x1c1aa4u: goto label_1c1aa4;
        case 0x1c1aa8u: goto label_1c1aa8;
        case 0x1c1aacu: goto label_1c1aac;
        case 0x1c1ab0u: goto label_1c1ab0;
        case 0x1c1ab4u: goto label_1c1ab4;
        case 0x1c1ab8u: goto label_1c1ab8;
        case 0x1c1abcu: goto label_1c1abc;
        case 0x1c1ac0u: goto label_1c1ac0;
        case 0x1c1ac4u: goto label_1c1ac4;
        case 0x1c1ac8u: goto label_1c1ac8;
        case 0x1c1accu: goto label_1c1acc;
        case 0x1c1ad0u: goto label_1c1ad0;
        case 0x1c1ad4u: goto label_1c1ad4;
        case 0x1c1ad8u: goto label_1c1ad8;
        case 0x1c1adcu: goto label_1c1adc;
        case 0x1c1ae0u: goto label_1c1ae0;
        case 0x1c1ae4u: goto label_1c1ae4;
        case 0x1c1ae8u: goto label_1c1ae8;
        case 0x1c1aecu: goto label_1c1aec;
        case 0x1c1af0u: goto label_1c1af0;
        case 0x1c1af4u: goto label_1c1af4;
        case 0x1c1af8u: goto label_1c1af8;
        case 0x1c1afcu: goto label_1c1afc;
        case 0x1c1b00u: goto label_1c1b00;
        case 0x1c1b04u: goto label_1c1b04;
        case 0x1c1b08u: goto label_1c1b08;
        case 0x1c1b0cu: goto label_1c1b0c;
        case 0x1c1b10u: goto label_1c1b10;
        case 0x1c1b14u: goto label_1c1b14;
        case 0x1c1b18u: goto label_1c1b18;
        case 0x1c1b1cu: goto label_1c1b1c;
        case 0x1c1b20u: goto label_1c1b20;
        case 0x1c1b24u: goto label_1c1b24;
        case 0x1c1b28u: goto label_1c1b28;
        case 0x1c1b2cu: goto label_1c1b2c;
        case 0x1c1b30u: goto label_1c1b30;
        case 0x1c1b34u: goto label_1c1b34;
        case 0x1c1b38u: goto label_1c1b38;
        case 0x1c1b3cu: goto label_1c1b3c;
        case 0x1c1b40u: goto label_1c1b40;
        case 0x1c1b44u: goto label_1c1b44;
        case 0x1c1b48u: goto label_1c1b48;
        case 0x1c1b4cu: goto label_1c1b4c;
        case 0x1c1b50u: goto label_1c1b50;
        case 0x1c1b54u: goto label_1c1b54;
        case 0x1c1b58u: goto label_1c1b58;
        case 0x1c1b5cu: goto label_1c1b5c;
        case 0x1c1b60u: goto label_1c1b60;
        case 0x1c1b64u: goto label_1c1b64;
        case 0x1c1b68u: goto label_1c1b68;
        case 0x1c1b6cu: goto label_1c1b6c;
        case 0x1c1b70u: goto label_1c1b70;
        case 0x1c1b74u: goto label_1c1b74;
        case 0x1c1b78u: goto label_1c1b78;
        case 0x1c1b7cu: goto label_1c1b7c;
        case 0x1c1b80u: goto label_1c1b80;
        case 0x1c1b84u: goto label_1c1b84;
        case 0x1c1b88u: goto label_1c1b88;
        case 0x1c1b8cu: goto label_1c1b8c;
        case 0x1c1b90u: goto label_1c1b90;
        case 0x1c1b94u: goto label_1c1b94;
        case 0x1c1b98u: goto label_1c1b98;
        case 0x1c1b9cu: goto label_1c1b9c;
        case 0x1c1ba0u: goto label_1c1ba0;
        case 0x1c1ba4u: goto label_1c1ba4;
        case 0x1c1ba8u: goto label_1c1ba8;
        case 0x1c1bacu: goto label_1c1bac;
        case 0x1c1bb0u: goto label_1c1bb0;
        case 0x1c1bb4u: goto label_1c1bb4;
        case 0x1c1bb8u: goto label_1c1bb8;
        case 0x1c1bbcu: goto label_1c1bbc;
        case 0x1c1bc0u: goto label_1c1bc0;
        case 0x1c1bc4u: goto label_1c1bc4;
        case 0x1c1bc8u: goto label_1c1bc8;
        case 0x1c1bccu: goto label_1c1bcc;
        case 0x1c1bd0u: goto label_1c1bd0;
        case 0x1c1bd4u: goto label_1c1bd4;
        case 0x1c1bd8u: goto label_1c1bd8;
        case 0x1c1bdcu: goto label_1c1bdc;
        case 0x1c1be0u: goto label_1c1be0;
        case 0x1c1be4u: goto label_1c1be4;
        case 0x1c1be8u: goto label_1c1be8;
        case 0x1c1becu: goto label_1c1bec;
        case 0x1c1bf0u: goto label_1c1bf0;
        case 0x1c1bf4u: goto label_1c1bf4;
        case 0x1c1bf8u: goto label_1c1bf8;
        case 0x1c1bfcu: goto label_1c1bfc;
        case 0x1c1c00u: goto label_1c1c00;
        case 0x1c1c04u: goto label_1c1c04;
        case 0x1c1c08u: goto label_1c1c08;
        case 0x1c1c0cu: goto label_1c1c0c;
        case 0x1c1c10u: goto label_1c1c10;
        case 0x1c1c14u: goto label_1c1c14;
        case 0x1c1c18u: goto label_1c1c18;
        case 0x1c1c1cu: goto label_1c1c1c;
        case 0x1c1c20u: goto label_1c1c20;
        case 0x1c1c24u: goto label_1c1c24;
        case 0x1c1c28u: goto label_1c1c28;
        case 0x1c1c2cu: goto label_1c1c2c;
        case 0x1c1c30u: goto label_1c1c30;
        case 0x1c1c34u: goto label_1c1c34;
        case 0x1c1c38u: goto label_1c1c38;
        case 0x1c1c3cu: goto label_1c1c3c;
        case 0x1c1c40u: goto label_1c1c40;
        case 0x1c1c44u: goto label_1c1c44;
        case 0x1c1c48u: goto label_1c1c48;
        case 0x1c1c4cu: goto label_1c1c4c;
        case 0x1c1c50u: goto label_1c1c50;
        case 0x1c1c54u: goto label_1c1c54;
        case 0x1c1c58u: goto label_1c1c58;
        case 0x1c1c5cu: goto label_1c1c5c;
        case 0x1c1c60u: goto label_1c1c60;
        case 0x1c1c64u: goto label_1c1c64;
        case 0x1c1c68u: goto label_1c1c68;
        case 0x1c1c6cu: goto label_1c1c6c;
        case 0x1c1c70u: goto label_1c1c70;
        case 0x1c1c74u: goto label_1c1c74;
        case 0x1c1c78u: goto label_1c1c78;
        case 0x1c1c7cu: goto label_1c1c7c;
        case 0x1c1c80u: goto label_1c1c80;
        case 0x1c1c84u: goto label_1c1c84;
        case 0x1c1c88u: goto label_1c1c88;
        case 0x1c1c8cu: goto label_1c1c8c;
        case 0x1c1c90u: goto label_1c1c90;
        case 0x1c1c94u: goto label_1c1c94;
        case 0x1c1c98u: goto label_1c1c98;
        case 0x1c1c9cu: goto label_1c1c9c;
        case 0x1c1ca0u: goto label_1c1ca0;
        case 0x1c1ca4u: goto label_1c1ca4;
        case 0x1c1ca8u: goto label_1c1ca8;
        case 0x1c1cacu: goto label_1c1cac;
        case 0x1c1cb0u: goto label_1c1cb0;
        case 0x1c1cb4u: goto label_1c1cb4;
        default: break;
    }

    ctx->pc = 0x1c1890u;

label_1c1890:
    // 0x1c1890: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1c1890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1c1894:
    // 0x1c1894: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x1c1894u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
label_1c1898:
    // 0x1c1898: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c1898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1c189c:
    // 0x1c189c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c189cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1c18a0:
    // 0x1c18a0: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x1c18a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
label_1c18a4:
    // 0x1c18a4: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1c18a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
label_1c18a8:
    // 0x1c18a8: 0x24510080  addiu       $s1, $v0, 0x80
    ctx->pc = 0x1c18a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
label_1c18ac:
    // 0x1c18ac: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c18acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1c18b0:
    // 0x1c18b0: 0xc4411388  lwc1        $f1, 0x1388($v0)
    ctx->pc = 0x1c18b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c18b4:
    // 0x1c18b4: 0x3c024240  lui         $v0, 0x4240
    ctx->pc = 0x1c18b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16960 << 16));
label_1c18b8:
    // 0x1c18b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c18b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c18bc:
    // 0x1c18bc: 0x0  nop
    ctx->pc = 0x1c18bcu;
    // NOP
label_1c18c0:
    // 0x1c18c0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1c18c0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1c18c4:
    // 0x1c18c4: 0x0  nop
    ctx->pc = 0x1c18c4u;
    // NOP
label_1c18c8:
    // 0x1c18c8: 0x45010009  bc1t        . + 4 + (0x9 << 2)
label_1c18cc:
    if (ctx->pc == 0x1C18CCu) {
        ctx->pc = 0x1C18D0u;
        goto label_1c18d0;
    }
    ctx->pc = 0x1C18C8u;
    {
        const bool branch_taken_0x1c18c8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c18c8) {
            ctx->pc = 0x1C18F0u;
            goto label_1c18f0;
        }
    }
    ctx->pc = 0x1C18D0u;
label_1c18d0:
    // 0x1c18d0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c18d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1c18d4:
    // 0x1c18d4: 0x8442127a  lh          $v0, 0x127A($v0)
    ctx->pc = 0x1c18d4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4730)));
label_1c18d8:
    // 0x1c18d8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_1c18dc:
    if (ctx->pc == 0x1C18DCu) {
        ctx->pc = 0x1C18E0u;
        goto label_1c18e0;
    }
    ctx->pc = 0x1C18D8u;
    {
        const bool branch_taken_0x1c18d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c18d8) {
            ctx->pc = 0x1C18F0u;
            goto label_1c18f0;
        }
    }
    ctx->pc = 0x1C18E0u;
label_1c18e0:
    // 0x1c18e0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c18e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1c18e4:
    // 0x1c18e4: 0xc4401380  lwc1        $f0, 0x1380($v0)
    ctx->pc = 0x1c18e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c18e8:
    // 0x1c18e8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c18e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1c18ec:
    // 0x1c18ec: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x1c18ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
label_1c18f0:
    // 0x1c18f0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c18f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1c18f4:
    // 0x1c18f4: 0x8442127c  lh          $v0, 0x127C($v0)
    ctx->pc = 0x1c18f4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4732)));
label_1c18f8:
    // 0x1c18f8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1c18fc:
    if (ctx->pc == 0x1C18FCu) {
        ctx->pc = 0x1C1900u;
        goto label_1c1900;
    }
    ctx->pc = 0x1C18F8u;
    {
        const bool branch_taken_0x1c18f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c18f8) {
            ctx->pc = 0x1C1910u;
            goto label_1c1910;
        }
    }
    ctx->pc = 0x1C1900u;
label_1c1900:
    // 0x1c1900: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c1900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1c1904:
    // 0x1c1904: 0x8462127c  lh          $v0, 0x127C($v1)
    ctx->pc = 0x1c1904u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4732)));
label_1c1908:
    // 0x1c1908: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1c1908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1c190c:
    // 0x1c190c: 0xa462127c  sh          $v0, 0x127C($v1)
    ctx->pc = 0x1c190cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4732), (uint16_t)GPR_U32(ctx, 2));
label_1c1910:
    // 0x1c1910: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c1910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1c1914:
    // 0x1c1914: 0x8442127a  lh          $v0, 0x127A($v0)
    ctx->pc = 0x1c1914u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4730)));
label_1c1918:
    // 0x1c1918: 0x14400075  bnez        $v0, . + 4 + (0x75 << 2)
label_1c191c:
    if (ctx->pc == 0x1C191Cu) {
        ctx->pc = 0x1C1920u;
        goto label_1c1920;
    }
    ctx->pc = 0x1C1918u;
    {
        const bool branch_taken_0x1c1918 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c1918) {
            ctx->pc = 0x1C1AF0u;
            goto label_1c1af0;
        }
    }
    ctx->pc = 0x1C1920u;
label_1c1920:
    // 0x1c1920: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c1920u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1c1924:
    // 0x1c1924: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c1924u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1c1928:
    // 0x1c1928: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c1928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1c192c:
    // 0x1c192c: 0xc48c00d4  lwc1        $f12, 0xD4($a0)
    ctx->pc = 0x1c192cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1c1930:
    // 0x1c1930: 0xc46d1568  lwc1        $f13, 0x1568($v1)
    ctx->pc = 0x1c1930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 5480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1c1934:
    // 0x1c1934: 0x9044156c  lbu         $a0, 0x156C($v0)
    ctx->pc = 0x1c1934u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 5484)));
label_1c1938:
    // 0x1c1938: 0xc058978  jal         func_1625E0
label_1c193c:
    if (ctx->pc == 0x1C193Cu) {
        ctx->pc = 0x1C1940u;
        goto label_1c1940;
    }
    ctx->pc = 0x1C1938u;
    SET_GPR_U32(ctx, 31, 0x1C1940u);
    ctx->pc = 0x1625E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1625E0u, 0x1C1938u, 0x1C1940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1940u;
label_1c1940:
    // 0x1c1940: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x1c1940u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1c1944:
    // 0x1c1944: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x1c1944u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_1c1948:
    // 0x1c1948: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1c1948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1c194c:
    // 0x1c194c: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_1c1950:
    if (ctx->pc == 0x1C1950u) {
        ctx->pc = 0x1C1954u;
        goto label_1c1954;
    }
    ctx->pc = 0x1C194Cu;
    {
        const bool branch_taken_0x1c194c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c194c) {
            ctx->pc = 0x1C195Cu;
            goto label_1c195c;
        }
    }
    ctx->pc = 0x1C1954u;
label_1c1954:
    // 0x1c1954: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1c1954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1c1958:
    // 0x1c1958: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x1c1958u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1c195c:
    // 0x1c195c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c195cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1c1960:
    // 0x1c1960: 0xc4411388  lwc1        $f1, 0x1388($v0)
    ctx->pc = 0x1c1960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c1964:
    // 0x1c1964: 0x3c024240  lui         $v0, 0x4240
    ctx->pc = 0x1c1964u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16960 << 16));
label_1c1968:
    // 0x1c1968: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c1968u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c196c:
    // 0x1c196c: 0x0  nop
    ctx->pc = 0x1c196cu;
    // NOP
label_1c1970:
    // 0x1c1970: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1c1970u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1c1974:
    // 0x1c1974: 0x0  nop
    ctx->pc = 0x1c1974u;
    // NOP
label_1c1978:
    // 0x1c1978: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_1c197c:
    if (ctx->pc == 0x1C197Cu) {
        ctx->pc = 0x1C1980u;
        goto label_1c1980;
    }
    ctx->pc = 0x1C1978u;
    {
        const bool branch_taken_0x1c1978 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c1978) {
            ctx->pc = 0x1C1998u;
            goto label_1c1998;
        }
    }
    ctx->pc = 0x1C1980u;
label_1c1980:
    // 0x1c1980: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c1980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1c1984:
    // 0x1c1984: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1c1984u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1c1988:
    // 0x1c1988: 0x3c022800  lui         $v0, 0x2800
    ctx->pc = 0x1c1988u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10240 << 16));
label_1c198c:
    // 0x1c198c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1c198cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_1c1990:
    // 0x1c1990: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_1c1994:
    if (ctx->pc == 0x1C1994u) {
        ctx->pc = 0x1C1998u;
        goto label_1c1998;
    }
    ctx->pc = 0x1C1990u;
    {
        const bool branch_taken_0x1c1990 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c1990) {
            ctx->pc = 0x1C199Cu;
            goto label_1c199c;
        }
    }
    ctx->pc = 0x1C1998u;
label_1c1998:
    // 0x1c1998: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x1c1998u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1c199c:
    // 0x1c199c: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x1c199cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_1c19a0:
    // 0x1c19a0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c19a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1c19a4:
    // 0x1c19a4: 0x9042156c  lbu         $v0, 0x156C($v0)
    ctx->pc = 0x1c19a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 5484)));
label_1c19a8:
    // 0x1c19a8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1c19a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1c19ac:
    // 0x1c19ac: 0x10620050  beq         $v1, $v0, . + 4 + (0x50 << 2)
label_1c19b0:
    if (ctx->pc == 0x1C19B0u) {
        ctx->pc = 0x1C19B4u;
        goto label_1c19b4;
    }
    ctx->pc = 0x1C19ACu;
    {
        const bool branch_taken_0x1c19ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c19ac) {
            ctx->pc = 0x1C1AF0u;
            goto label_1c1af0;
        }
    }
    ctx->pc = 0x1C19B4u;
label_1c19b4:
    // 0x1c19b4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c19b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1c19b8:
    // 0x1c19b8: 0x9042156c  lbu         $v0, 0x156C($v0)
    ctx->pc = 0x1c19b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 5484)));
label_1c19bc:
    // 0x1c19bc: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1c19bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1c19c0:
    // 0x1c19c0: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1c19c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1c19c4:
    // 0x1c19c4: 0x1062002f  beq         $v1, $v0, . + 4 + (0x2F << 2)
label_1c19c8:
    if (ctx->pc == 0x1C19C8u) {
        ctx->pc = 0x1C19CCu;
        goto label_1c19cc;
    }
    ctx->pc = 0x1C19C4u;
    {
        const bool branch_taken_0x1c19c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c19c4) {
            ctx->pc = 0x1C1A84u;
            goto label_1c1a84;
        }
    }
    ctx->pc = 0x1C19CCu;
label_1c19cc:
    // 0x1c19cc: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1c19ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1c19d0:
    // 0x1c19d0: 0x10620025  beq         $v1, $v0, . + 4 + (0x25 << 2)
label_1c19d4:
    if (ctx->pc == 0x1C19D4u) {
        ctx->pc = 0x1C19D8u;
        goto label_1c19d8;
    }
    ctx->pc = 0x1C19D0u;
    {
        const bool branch_taken_0x1c19d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c19d0) {
            ctx->pc = 0x1C1A68u;
            goto label_1c1a68;
        }
    }
    ctx->pc = 0x1C19D8u;
label_1c19d8:
    // 0x1c19d8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1c19d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1c19dc:
    // 0x1c19dc: 0x1062001b  beq         $v1, $v0, . + 4 + (0x1B << 2)
label_1c19e0:
    if (ctx->pc == 0x1C19E0u) {
        ctx->pc = 0x1C19E4u;
        goto label_1c19e4;
    }
    ctx->pc = 0x1C19DCu;
    {
        const bool branch_taken_0x1c19dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c19dc) {
            ctx->pc = 0x1C1A4Cu;
            goto label_1c1a4c;
        }
    }
    ctx->pc = 0x1C19E4u;
label_1c19e4:
    // 0x1c19e4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1c19e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1c19e8:
    // 0x1c19e8: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
label_1c19ec:
    if (ctx->pc == 0x1C19ECu) {
        ctx->pc = 0x1C19F0u;
        goto label_1c19f0;
    }
    ctx->pc = 0x1C19E8u;
    {
        const bool branch_taken_0x1c19e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c19e8) {
            ctx->pc = 0x1C1A30u;
            goto label_1c1a30;
        }
    }
    ctx->pc = 0x1C19F0u;
label_1c19f0:
    // 0x1c19f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c19f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c19f4:
    // 0x1c19f4: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_1c19f8:
    if (ctx->pc == 0x1C19F8u) {
        ctx->pc = 0x1C19FCu;
        goto label_1c19fc;
    }
    ctx->pc = 0x1C19F4u;
    {
        const bool branch_taken_0x1c19f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c19f4) {
            ctx->pc = 0x1C1A04u;
            goto label_1c1a04;
        }
    }
    ctx->pc = 0x1C19FCu;
label_1c19fc:
    // 0x1c19fc: 0x10000026  b           . + 4 + (0x26 << 2)
label_1c1a00:
    if (ctx->pc == 0x1C1A00u) {
        ctx->pc = 0x1C1A04u;
        goto label_1c1a04;
    }
    ctx->pc = 0x1C19FCu;
    {
        const bool branch_taken_0x1c19fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c19fc) {
            ctx->pc = 0x1C1A98u;
            goto label_1c1a98;
        }
    }
    ctx->pc = 0x1C1A04u;
label_1c1a04:
    // 0x1c1a04: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x1c1a04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_1c1a08:
    // 0x1c1a08: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1c1a08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1c1a0c:
    // 0x1c1a0c: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_1c1a10:
    if (ctx->pc == 0x1C1A10u) {
        ctx->pc = 0x1C1A14u;
        goto label_1c1a14;
    }
    ctx->pc = 0x1C1A0Cu;
    {
        const bool branch_taken_0x1c1a0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c1a0c) {
            ctx->pc = 0x1C1A24u;
            goto label_1c1a24;
        }
    }
    ctx->pc = 0x1C1A14u;
label_1c1a14:
    // 0x1c1a14: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x1c1a14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_1c1a18:
    // 0x1c1a18: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1c1a18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1c1a1c:
    // 0x1c1a1c: 0x1462001e  bne         $v1, $v0, . + 4 + (0x1E << 2)
label_1c1a20:
    if (ctx->pc == 0x1C1A20u) {
        ctx->pc = 0x1C1A24u;
        goto label_1c1a24;
    }
    ctx->pc = 0x1C1A1Cu;
    {
        const bool branch_taken_0x1c1a1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c1a1c) {
            ctx->pc = 0x1C1A98u;
            goto label_1c1a98;
        }
    }
    ctx->pc = 0x1C1A24u;
label_1c1a24:
    // 0x1c1a24: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x1c1a24u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1c1a28:
    // 0x1c1a28: 0x1000001b  b           . + 4 + (0x1B << 2)
label_1c1a2c:
    if (ctx->pc == 0x1C1A2Cu) {
        ctx->pc = 0x1C1A30u;
        goto label_1c1a30;
    }
    ctx->pc = 0x1C1A28u;
    {
        const bool branch_taken_0x1c1a28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c1a28) {
            ctx->pc = 0x1C1A98u;
            goto label_1c1a98;
        }
    }
    ctx->pc = 0x1C1A30u;
label_1c1a30:
    // 0x1c1a30: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x1c1a30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_1c1a34:
    // 0x1c1a34: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c1a34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c1a38:
    // 0x1c1a38: 0x14620017  bne         $v1, $v0, . + 4 + (0x17 << 2)
label_1c1a3c:
    if (ctx->pc == 0x1C1A3Cu) {
        ctx->pc = 0x1C1A40u;
        goto label_1c1a40;
    }
    ctx->pc = 0x1C1A38u;
    {
        const bool branch_taken_0x1c1a38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c1a38) {
            ctx->pc = 0x1C1A98u;
            goto label_1c1a98;
        }
    }
    ctx->pc = 0x1C1A40u;
label_1c1a40:
    // 0x1c1a40: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x1c1a40u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1c1a44:
    // 0x1c1a44: 0x10000014  b           . + 4 + (0x14 << 2)
label_1c1a48:
    if (ctx->pc == 0x1C1A48u) {
        ctx->pc = 0x1C1A4Cu;
        goto label_1c1a4c;
    }
    ctx->pc = 0x1C1A44u;
    {
        const bool branch_taken_0x1c1a44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c1a44) {
            ctx->pc = 0x1C1A98u;
            goto label_1c1a98;
        }
    }
    ctx->pc = 0x1C1A4Cu;
label_1c1a4c:
    // 0x1c1a4c: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x1c1a4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_1c1a50:
    // 0x1c1a50: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c1a50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c1a54:
    // 0x1c1a54: 0x14620010  bne         $v1, $v0, . + 4 + (0x10 << 2)
label_1c1a58:
    if (ctx->pc == 0x1C1A58u) {
        ctx->pc = 0x1C1A5Cu;
        goto label_1c1a5c;
    }
    ctx->pc = 0x1C1A54u;
    {
        const bool branch_taken_0x1c1a54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c1a54) {
            ctx->pc = 0x1C1A98u;
            goto label_1c1a98;
        }
    }
    ctx->pc = 0x1C1A5Cu;
label_1c1a5c:
    // 0x1c1a5c: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x1c1a5cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1c1a60:
    // 0x1c1a60: 0x1000000d  b           . + 4 + (0xD << 2)
label_1c1a64:
    if (ctx->pc == 0x1C1A64u) {
        ctx->pc = 0x1C1A68u;
        goto label_1c1a68;
    }
    ctx->pc = 0x1C1A60u;
    {
        const bool branch_taken_0x1c1a60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c1a60) {
            ctx->pc = 0x1C1A98u;
            goto label_1c1a98;
        }
    }
    ctx->pc = 0x1C1A68u;
label_1c1a68:
    // 0x1c1a68: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x1c1a68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_1c1a6c:
    // 0x1c1a6c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1c1a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1c1a70:
    // 0x1c1a70: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
label_1c1a74:
    if (ctx->pc == 0x1C1A74u) {
        ctx->pc = 0x1C1A78u;
        goto label_1c1a78;
    }
    ctx->pc = 0x1C1A70u;
    {
        const bool branch_taken_0x1c1a70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c1a70) {
            ctx->pc = 0x1C1A98u;
            goto label_1c1a98;
        }
    }
    ctx->pc = 0x1C1A78u;
label_1c1a78:
    // 0x1c1a78: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x1c1a78u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1c1a7c:
    // 0x1c1a7c: 0x10000006  b           . + 4 + (0x6 << 2)
label_1c1a80:
    if (ctx->pc == 0x1C1A80u) {
        ctx->pc = 0x1C1A84u;
        goto label_1c1a84;
    }
    ctx->pc = 0x1C1A7Cu;
    {
        const bool branch_taken_0x1c1a7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c1a7c) {
            ctx->pc = 0x1C1A98u;
            goto label_1c1a98;
        }
    }
    ctx->pc = 0x1C1A84u;
label_1c1a84:
    // 0x1c1a84: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x1c1a84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_1c1a88:
    // 0x1c1a88: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1c1a88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1c1a8c:
    // 0x1c1a8c: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_1c1a90:
    if (ctx->pc == 0x1C1A90u) {
        ctx->pc = 0x1C1A94u;
        goto label_1c1a94;
    }
    ctx->pc = 0x1C1A8Cu;
    {
        const bool branch_taken_0x1c1a8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c1a8c) {
            ctx->pc = 0x1C1A98u;
            goto label_1c1a98;
        }
    }
    ctx->pc = 0x1C1A94u;
label_1c1a94:
    // 0x1c1a94: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x1c1a94u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1c1a98:
    // 0x1c1a98: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1c1a98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1c1a9c:
    // 0x1c1a9c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c1a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1c1aa0:
    // 0x1c1aa0: 0xa443127a  sh          $v1, 0x127A($v0)
    ctx->pc = 0x1c1aa0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 3));
label_1c1aa4:
    // 0x1c1aa4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c1aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1c1aa8:
    // 0x1c1aa8: 0xa050156c  sb          $s0, 0x156C($v0)
    ctx->pc = 0x1c1aa8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 5484), (uint8_t)GPR_U32(ctx, 16));
label_1c1aac:
    // 0x1c1aac: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c1aacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1c1ab0:
    // 0x1c1ab0: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x1c1ab0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
label_1c1ab4:
    // 0x1c1ab4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c1ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1c1ab8:
    // 0x1c1ab8: 0x8c4213e8  lw          $v0, 0x13E8($v0)
    ctx->pc = 0x1c1ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5096)));
label_1c1abc:
    // 0x1c1abc: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_1c1ac0:
    if (ctx->pc == 0x1C1AC0u) {
        ctx->pc = 0x1C1AC4u;
        goto label_1c1ac4;
    }
    ctx->pc = 0x1C1ABCu;
    {
        const bool branch_taken_0x1c1abc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c1abc) {
            ctx->pc = 0x1C1AE4u;
            goto label_1c1ae4;
        }
    }
    ctx->pc = 0x1C1AC4u;
label_1c1ac4:
    // 0x1c1ac4: 0x8e220090  lw          $v0, 0x90($s1)
    ctx->pc = 0x1c1ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
label_1c1ac8:
    // 0x1c1ac8: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1c1ac8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_1c1acc:
    // 0x1c1acc: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_1c1ad0:
    if (ctx->pc == 0x1C1AD0u) {
        ctx->pc = 0x1C1AD4u;
        goto label_1c1ad4;
    }
    ctx->pc = 0x1C1ACCu;
    {
        const bool branch_taken_0x1c1acc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c1acc) {
            ctx->pc = 0x1C1AE4u;
            goto label_1c1ae4;
        }
    }
    ctx->pc = 0x1C1AD4u;
label_1c1ad4:
    // 0x1c1ad4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c1ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1c1ad8:
    // 0x1c1ad8: 0xa040156d  sb          $zero, 0x156D($v0)
    ctx->pc = 0x1c1ad8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 5485), (uint8_t)GPR_U32(ctx, 0));
label_1c1adc:
    // 0x1c1adc: 0x10000004  b           . + 4 + (0x4 << 2)
label_1c1ae0:
    if (ctx->pc == 0x1C1AE0u) {
        ctx->pc = 0x1C1AE4u;
        goto label_1c1ae4;
    }
    ctx->pc = 0x1C1ADCu;
    {
        const bool branch_taken_0x1c1adc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c1adc) {
            ctx->pc = 0x1C1AF0u;
            goto label_1c1af0;
        }
    }
    ctx->pc = 0x1C1AE4u;
label_1c1ae4:
    // 0x1c1ae4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c1ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c1ae8:
    // 0x1c1ae8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c1ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1c1aec:
    // 0x1c1aec: 0xa043156d  sb          $v1, 0x156D($v0)
    ctx->pc = 0x1c1aecu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 5485), (uint8_t)GPR_U32(ctx, 3));
label_1c1af0:
    // 0x1c1af0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c1af0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1c1af4:
    // 0x1c1af4: 0xc058aa4  jal         func_162A90
label_1c1af8:
    if (ctx->pc == 0x1C1AF8u) {
        ctx->pc = 0x1C1AFCu;
        goto label_1c1afc;
    }
    ctx->pc = 0x1C1AF4u;
    SET_GPR_U32(ctx, 31, 0x1C1AFCu);
    ctx->pc = 0x162A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x162A90u, 0x1C1AF4u, 0x1C1AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1AFCu;
label_1c1afc:
    // 0x1c1afc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c1afcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1c1b00:
    // 0x1c1b00: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x1c1b00u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_1c1b04:
    // 0x1c1b04: 0xc0572a4  jal         func_15CA90
label_1c1b08:
    if (ctx->pc == 0x1C1B08u) {
        ctx->pc = 0x1C1B0Cu;
        goto label_1c1b0c;
    }
    ctx->pc = 0x1C1B04u;
    SET_GPR_U32(ctx, 31, 0x1C1B0Cu);
    ctx->pc = 0x15CA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CA90u, 0x1C1B04u, 0x1C1B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1B0Cu;
label_1c1b0c:
    // 0x1c1b0c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c1b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1c1b10:
    // 0x1c1b10: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c1b10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1c1b14:
    // 0x1c1b14: 0x9042156c  lbu         $v0, 0x156C($v0)
    ctx->pc = 0x1c1b14u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 5484)));
label_1c1b18:
    // 0x1c1b18: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1c1b18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1c1b1c:
    // 0x1c1b1c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1c1b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_1c1b20:
    // 0x1c1b20: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c1b20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1c1b24:
    // 0x1c1b24: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1c1b24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1c1b28:
    // 0x1c1b28: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1c1b28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_1c1b2c:
    // 0x1c1b2c: 0x244290c0  addiu       $v0, $v0, -0x6F40
    ctx->pc = 0x1c1b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938816));
label_1c1b30:
    // 0x1c1b30: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1c1b30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1c1b34:
    // 0x1c1b34: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c1b34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1c1b38:
    // 0x1c1b38: 0x9042156d  lbu         $v0, 0x156D($v0)
    ctx->pc = 0x1c1b38u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 5485)));
label_1c1b3c:
    // 0x1c1b3c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1c1b3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1c1b40:
    // 0x1c1b40: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1c1b40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1c1b44:
    // 0x1c1b44: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c1b44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1c1b48:
    // 0x1c1b48: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1c1b48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1c1b4c:
    // 0x1c1b4c: 0x40f809  jalr        $v0
label_1c1b50:
    if (ctx->pc == 0x1C1B50u) {
        ctx->pc = 0x1C1B54u;
        goto label_1c1b54;
    }
    ctx->pc = 0x1C1B4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C1B54u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C1B4Cu, 0x1C1B54u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C1B54u;
label_1c1b54:
    // 0x1c1b54: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c1b54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1c1b58:
    // 0x1c1b58: 0xc4601568  lwc1        $f0, 0x1568($v1)
    ctx->pc = 0x1c1b58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 5480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c1b5c:
    // 0x1c1b5c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c1b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1c1b60:
    // 0x1c1b60: 0xe4601570  swc1        $f0, 0x1570($v1)
    ctx->pc = 0x1c1b60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 5488), bits); }
label_1c1b64:
    // 0x1c1b64: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c1b64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1c1b68:
    // 0x1c1b68: 0x8463127a  lh          $v1, 0x127A($v1)
    ctx->pc = 0x1c1b68u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4730)));
label_1c1b6c:
    // 0x1c1b6c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_1c1b70:
    if (ctx->pc == 0x1C1B70u) {
        ctx->pc = 0x1C1B74u;
        goto label_1c1b74;
    }
    ctx->pc = 0x1C1B6Cu;
    {
        const bool branch_taken_0x1c1b6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c1b6c) {
            ctx->pc = 0x1C1B84u;
            goto label_1c1b84;
        }
    }
    ctx->pc = 0x1C1B74u;
label_1c1b74:
    // 0x1c1b74: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c1b74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1c1b78:
    // 0x1c1b78: 0x8483127a  lh          $v1, 0x127A($a0)
    ctx->pc = 0x1c1b78u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4730)));
label_1c1b7c:
    // 0x1c1b7c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1c1b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_1c1b80:
    // 0x1c1b80: 0xa483127a  sh          $v1, 0x127A($a0)
    ctx->pc = 0x1c1b80u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4730), (uint16_t)GPR_U32(ctx, 3));
label_1c1b84:
    // 0x1c1b84: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c1b84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1c1b88:
    // 0x1c1b88: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1c1b88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1c1b8c:
    // 0x1c1b8c: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x1c1b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
label_1c1b90:
    // 0x1c1b90: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1c1b90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_1c1b94:
    // 0x1c1b94: 0x14600042  bnez        $v1, . + 4 + (0x42 << 2)
label_1c1b98:
    if (ctx->pc == 0x1C1B98u) {
        ctx->pc = 0x1C1B9Cu;
        goto label_1c1b9c;
    }
    ctx->pc = 0x1C1B94u;
    {
        const bool branch_taken_0x1c1b94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c1b94) {
            ctx->pc = 0x1C1CA0u;
            goto label_1c1ca0;
        }
    }
    ctx->pc = 0x1C1B9Cu;
label_1c1b9c:
    // 0x1c1b9c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c1b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1c1ba0:
    // 0x1c1ba0: 0x8463127a  lh          $v1, 0x127A($v1)
    ctx->pc = 0x1c1ba0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4730)));
label_1c1ba4:
    // 0x1c1ba4: 0x1460003e  bnez        $v1, . + 4 + (0x3E << 2)
label_1c1ba8:
    if (ctx->pc == 0x1C1BA8u) {
        ctx->pc = 0x1C1BACu;
        goto label_1c1bac;
    }
    ctx->pc = 0x1C1BA4u;
    {
        const bool branch_taken_0x1c1ba4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c1ba4) {
            ctx->pc = 0x1C1CA0u;
            goto label_1c1ca0;
        }
    }
    ctx->pc = 0x1C1BACu;
label_1c1bac:
    // 0x1c1bac: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c1bacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1c1bb0:
    // 0x1c1bb0: 0x9063156d  lbu         $v1, 0x156D($v1)
    ctx->pc = 0x1c1bb0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 5485)));
label_1c1bb4:
    // 0x1c1bb4: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1c1bb4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_1c1bb8:
    // 0x1c1bb8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1c1bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1c1bbc:
    // 0x1c1bbc: 0x1083001f  beq         $a0, $v1, . + 4 + (0x1F << 2)
label_1c1bc0:
    if (ctx->pc == 0x1C1BC0u) {
        ctx->pc = 0x1C1BC4u;
        goto label_1c1bc4;
    }
    ctx->pc = 0x1C1BBCu;
    {
        const bool branch_taken_0x1c1bbc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1c1bbc) {
            ctx->pc = 0x1C1C3Cu;
            goto label_1c1c3c;
        }
    }
    ctx->pc = 0x1C1BC4u;
label_1c1bc4:
    // 0x1c1bc4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c1bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c1bc8:
    // 0x1c1bc8: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
label_1c1bcc:
    if (ctx->pc == 0x1C1BCCu) {
        ctx->pc = 0x1C1BD0u;
        goto label_1c1bd0;
    }
    ctx->pc = 0x1C1BC8u;
    {
        const bool branch_taken_0x1c1bc8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1c1bc8) {
            ctx->pc = 0x1C1BE0u;
            goto label_1c1be0;
        }
    }
    ctx->pc = 0x1C1BD0u;
label_1c1bd0:
    // 0x1c1bd0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_1c1bd4:
    if (ctx->pc == 0x1C1BD4u) {
        ctx->pc = 0x1C1BD8u;
        goto label_1c1bd8;
    }
    ctx->pc = 0x1C1BD0u;
    {
        const bool branch_taken_0x1c1bd0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c1bd0) {
            ctx->pc = 0x1C1BE0u;
            goto label_1c1be0;
        }
    }
    ctx->pc = 0x1C1BD8u;
label_1c1bd8:
    // 0x1c1bd8: 0x10000031  b           . + 4 + (0x31 << 2)
label_1c1bdc:
    if (ctx->pc == 0x1C1BDCu) {
        ctx->pc = 0x1C1BE0u;
        goto label_1c1be0;
    }
    ctx->pc = 0x1C1BD8u;
    {
        const bool branch_taken_0x1c1bd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c1bd8) {
            ctx->pc = 0x1C1CA0u;
            goto label_1c1ca0;
        }
    }
    ctx->pc = 0x1C1BE0u;
label_1c1be0:
    // 0x1c1be0: 0xc057acc  jal         func_15EB30
label_1c1be4:
    if (ctx->pc == 0x1C1BE4u) {
        ctx->pc = 0x1C1BE8u;
        goto label_1c1be8;
    }
    ctx->pc = 0x1C1BE0u;
    SET_GPR_U32(ctx, 31, 0x1C1BE8u);
    ctx->pc = 0x15EB30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15EB30u, 0x1C1BE0u, 0x1C1BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1BE8u;
label_1c1be8:
    // 0x1c1be8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1c1bec:
    if (ctx->pc == 0x1C1BECu) {
        ctx->pc = 0x1C1BF0u;
        goto label_1c1bf0;
    }
    ctx->pc = 0x1C1BE8u;
    {
        const bool branch_taken_0x1c1be8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c1be8) {
            ctx->pc = 0x1C1C04u;
            goto label_1c1c04;
        }
    }
    ctx->pc = 0x1C1BF0u;
label_1c1bf0:
    // 0x1c1bf0: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x1c1bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1c1bf4:
    // 0x1c1bf4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c1bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1c1bf8:
    // 0x1c1bf8: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x1c1bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
label_1c1bfc:
    // 0x1c1bfc: 0x10000028  b           . + 4 + (0x28 << 2)
label_1c1c00:
    if (ctx->pc == 0x1C1C00u) {
        ctx->pc = 0x1C1C04u;
        goto label_1c1c04;
    }
    ctx->pc = 0x1C1BFCu;
    {
        const bool branch_taken_0x1c1bfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c1bfc) {
            ctx->pc = 0x1C1CA0u;
            goto label_1c1ca0;
        }
    }
    ctx->pc = 0x1C1C04u;
label_1c1c04:
    // 0x1c1c04: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c1c04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c1c08:
    // 0x1c1c08: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c1c08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1c1c0c:
    // 0x1c1c0c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1c1c0cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_1c1c10:
    // 0x1c1c10: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c1c10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1c1c14:
    // 0x1c1c14: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x1c1c14u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
label_1c1c18:
    // 0x1c1c18: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c1c18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1c1c1c:
    // 0x1c1c1c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1c1c1cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_1c1c20:
    // 0x1c1c20: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c1c20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1c1c24:
    // 0x1c1c24: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1c1c24u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_1c1c28:
    // 0x1c1c28: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x1c1c28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_1c1c2c:
    // 0x1c1c2c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c1c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1c1c30:
    // 0x1c1c30: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x1c1c30u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
label_1c1c34:
    // 0x1c1c34: 0x1000001a  b           . + 4 + (0x1A << 2)
label_1c1c38:
    if (ctx->pc == 0x1C1C38u) {
        ctx->pc = 0x1C1C3Cu;
        goto label_1c1c3c;
    }
    ctx->pc = 0x1C1C34u;
    {
        const bool branch_taken_0x1c1c34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c1c34) {
            ctx->pc = 0x1C1CA0u;
            goto label_1c1ca0;
        }
    }
    ctx->pc = 0x1C1C3Cu;
label_1c1c3c:
    // 0x1c1c3c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c1c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1c1c40:
    // 0x1c1c40: 0x8463127c  lh          $v1, 0x127C($v1)
    ctx->pc = 0x1c1c40u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4732)));
label_1c1c44:
    // 0x1c1c44: 0x14600016  bnez        $v1, . + 4 + (0x16 << 2)
label_1c1c48:
    if (ctx->pc == 0x1C1C48u) {
        ctx->pc = 0x1C1C4Cu;
        goto label_1c1c4c;
    }
    ctx->pc = 0x1C1C44u;
    {
        const bool branch_taken_0x1c1c44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c1c44) {
            ctx->pc = 0x1C1CA0u;
            goto label_1c1ca0;
        }
    }
    ctx->pc = 0x1C1C4Cu;
label_1c1c4c:
    // 0x1c1c4c: 0xc057acc  jal         func_15EB30
label_1c1c50:
    if (ctx->pc == 0x1C1C50u) {
        ctx->pc = 0x1C1C54u;
        goto label_1c1c54;
    }
    ctx->pc = 0x1C1C4Cu;
    SET_GPR_U32(ctx, 31, 0x1C1C54u);
    ctx->pc = 0x15EB30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15EB30u, 0x1C1C4Cu, 0x1C1C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1C54u;
label_1c1c54:
    // 0x1c1c54: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1c1c58:
    if (ctx->pc == 0x1C1C58u) {
        ctx->pc = 0x1C1C5Cu;
        goto label_1c1c5c;
    }
    ctx->pc = 0x1C1C54u;
    {
        const bool branch_taken_0x1c1c54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c1c54) {
            ctx->pc = 0x1C1C70u;
            goto label_1c1c70;
        }
    }
    ctx->pc = 0x1C1C5Cu;
label_1c1c5c:
    // 0x1c1c5c: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x1c1c5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1c1c60:
    // 0x1c1c60: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c1c60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1c1c64:
    // 0x1c1c64: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x1c1c64u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
label_1c1c68:
    // 0x1c1c68: 0x1000000d  b           . + 4 + (0xD << 2)
label_1c1c6c:
    if (ctx->pc == 0x1C1C6Cu) {
        ctx->pc = 0x1C1C70u;
        goto label_1c1c70;
    }
    ctx->pc = 0x1C1C68u;
    {
        const bool branch_taken_0x1c1c68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c1c68) {
            ctx->pc = 0x1C1CA0u;
            goto label_1c1ca0;
        }
    }
    ctx->pc = 0x1C1C70u;
label_1c1c70:
    // 0x1c1c70: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c1c70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c1c74:
    // 0x1c1c74: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c1c74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1c1c78:
    // 0x1c1c78: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1c1c78u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_1c1c7c:
    // 0x1c1c7c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c1c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1c1c80:
    // 0x1c1c80: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x1c1c80u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
label_1c1c84:
    // 0x1c1c84: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c1c84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1c1c88:
    // 0x1c1c88: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1c1c88u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_1c1c8c:
    // 0x1c1c8c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c1c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1c1c90:
    // 0x1c1c90: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1c1c90u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_1c1c94:
    // 0x1c1c94: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x1c1c94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_1c1c98:
    // 0x1c1c98: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c1c98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1c1c9c:
    // 0x1c1c9c: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x1c1c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
label_1c1ca0:
    // 0x1c1ca0: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x1c1ca0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1c1ca4:
    // 0x1c1ca4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c1ca4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1c1ca8:
    // 0x1c1ca8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c1ca8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1c1cac:
    // 0x1c1cac: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1c1cacu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1c1cb0:
    // 0x1c1cb0: 0x3e00008  jr          $ra
label_1c1cb4:
    if (ctx->pc == 0x1C1CB4u) {
        ctx->pc = 0x1C1CB8u;
        goto label_fallthrough_0x1c1cb0;
    }
    ctx->pc = 0x1C1CB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C1CB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1c1cb0:
    ctx->pc = 0x1C1CB8u;
}
